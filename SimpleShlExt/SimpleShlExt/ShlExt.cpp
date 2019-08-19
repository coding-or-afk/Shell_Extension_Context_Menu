// ShlExt.cpp : CShlExt 구현

#include "stdafx.h"
#include "ShlExt.h"
#include <stdlib.h>

// CShlExt

CShlExt::CShlExt() {
	m_hBmp = LoadBitmapW(_AtlBaseModule.GetModuleInstance(),MAKEINTRESOURCEW(IDB_BITMAP1));
}

CShlExt::~CShlExt() {
	if (NULL != m_hBmp) {
		DeleteObject(m_hBmp);
	}
}

HRESULT CShlExt::Initialize(LPCITEMIDLIST  pidlFolder, LPDATAOBJECT pDataObj, HKEY hProgID)
{
	FORMATETC fmt = { CF_HDROP, NULL, DVASPECT_CONTENT, -1, TYMED_HGLOBAL };
	STGMEDIUM stg = { TYMED_HGLOBAL };
	HDROP     hDrop;

	// Look for CF_HDROP data in the data object. If there
	// is no such data, return an error back to Explorer.
	if (FAILED(pDataObj->GetData(&fmt, &stg)))
		return E_INVALIDARG;

	// Get a pointer to the actual data.
	hDrop = (HDROP)GlobalLock(stg.hGlobal);

	// Make sure it worked.
	if (NULL == hDrop)
		return E_INVALIDARG;
	// Sanity check – make sure there is at least one filename.
	UINT uNumFiles = DragQueryFile(hDrop, 0xFFFFFFFF, NULL, 0);
	HRESULT hr = S_OK;

	if (0 == uNumFiles)
	{
		GlobalUnlock(stg.hGlobal);
		ReleaseStgMedium(&stg);
		return E_INVALIDARG;
	}

	// Get the name of the first file and store it in our
	// member variable m_szFile.
	if (0 == DragQueryFileW(hDrop, 0, m_szFile, MAX_PATH))
		hr = E_INVALIDARG;

	GlobalUnlock(stg.hGlobal);
	ReleaseStgMedium(&stg);

	return hr;
}

HRESULT CShlExt::QueryContextMenu(HMENU hmenu, UINT uMenuIndex, UINT uidFirstCmd, UINT uidLastCmd, UINT uFlags)
{

	// If the flags include CMF_DEFAULTONLY then we shouldn't do anything.
	if (uFlags & CMF_DEFAULTONLY)
		return MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_NULL, 0);

	UINT uCmdID = uidFirstCmd;




	////시작 경계선
	InsertMenuW(hmenu, uMenuIndex, MF_SEPARATOR | MF_BYPOSITION, 0, NULL);

	////MENU1 버튼추가
	InsertMenuW(hmenu, uMenuIndex + 1, MF_STRING | MF_BYPOSITION, uCmdID++, L"Properties");
	SetMenuItemBitmaps(hmenu,uMenuIndex+1,MF_BYPOSITION,m_hBmp,NULL);


	//Debug용 변수
	//UINT nIndex = uMenuIndex;
	

	//MENU2에 Submenu 3개 추가
	HMENU hSubMenu = CreateMenu();
	InsertMenuW(hSubMenu, 0, MF_BYPOSITION, uCmdID++, L"Copy");
	InsertMenuW(hSubMenu, 1, MF_BYPOSITION, uCmdID++, L"Move");
	InsertMenuW(hSubMenu, 2, MF_BYPOSITION, uCmdID++, L"Delete");

	MENUITEMINFO mii = { sizeof(mii) };
	mii.fMask = MIIM_SUBMENU | MIIM_STRING;
	mii.hSubMenu = hSubMenu;
	mii.dwTypeData = L"FILE ...";

	//InsertMenuW(hmenu, uMenuIndex, MF_STRING | MF_BYPOSITION,uCmdID++, _T("SimpleShlExt Test Item1"));
	//uMenuIndex++;
	//InsertMenuW(hmenu, uMenuIndex, MF_STRING | MF_BYPOSITION,uCmdID++, _T("SimpleShlExt Test Item2"));
	//uMenuIndex++;

	//MENU2 버튼추가
	InsertMenuItemW(hmenu, uMenuIndex + 2, TRUE, &mii);
	//TraceW(L"Index: %d, %d Err: %d", uMenuIndex, uMenuIndex, ::HRESULT_FROM_WIN32(::GetLastError()));


	////끝 경계선
	InsertMenuW(hmenu, uMenuIndex + 3, MF_SEPARATOR | MF_BYPOSITION, 0, NULL);

	return MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_NULL, uCmdID - uidFirstCmd);
}

STDMETHODIMP CShlExt::GetCommandString(UINT_PTR idCmd, UINT uFlags, UINT *pReserved, CHAR *pszName, UINT cchMax)
{
	USES_CONVERSION;

	// If Explorer is asking for a help string, copy our string into the
	// supplied buffer.
	if (uFlags & GCS_HELPTEXT)
	{
		LPCTSTR szText = _T("This is the simple shell extension's help");

		if (uFlags & GCS_UNICODE)
		{
			// We need to cast pszName to a Unicode string, and then use the
			// Unicode string copy API.
			lstrcpynW((LPWSTR)pszName, T2CW(szText), cchMax);
		}
		else
		{
			// Use the ANSI string copy API to return the help string.
			lstrcpynA(pszName, T2CA(szText), cchMax);
		}

		return S_OK;
	}

	return E_INVALIDARG;
}

HRESULT CShlExt::InvokeCommand(LPCMINVOKECOMMANDINFO pCmdInfo)
{
	// If lpVerb really points to a string, ignore this function call and bail out.
	if (0 != HIWORD(pCmdInfo->lpVerb))
		return E_INVALIDARG;

	// Get the command index - the only valid one is 0.
	switch (LOWORD(pCmdInfo->lpVerb))
	{
		//properties
	case 0:
	{

		//GetFileAttributesW(m_szFile) & FILE_ATTRIBUTE_DIRECTORY

		WIN32_FILE_ATTRIBUTE_DATA fInfo;
		GetFileAttributesExW(m_szFile, GetFileExInfoStandard, &fInfo);

		if (fInfo.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
			TCHAR szMsg[BUFSIZ];
			wsprintf(szMsg, _T("This is Directory\n\nFull Path : %s"), m_szFile);
			MessageBoxW(pCmdInfo->hwnd, szMsg, _T("Properties"), MB_ICONINFORMATION);
		}
		else {
			TCHAR szMsg[BUFSIZ];
			wsprintf(szMsg, _T("This is File\n\nFull Path : %s"), m_szFile);
			MessageBoxW(pCmdInfo->hwnd, szMsg, _T("Properties"), MB_ICONINFORMATION);
		}
		return S_OK;

	}
	break;


	//copy
	case 1:
	{
		TCHAR path_buf[MAX_PATH];
		TCHAR drive[_MAX_DRIVE];
		TCHAR dir[_MAX_DIR];
		TCHAR fname[_MAX_FNAME];
		TCHAR ext[_MAX_EXT];
		_tsplitpath_s(m_szFile, drive, dir, fname, ext);
		/*
		if (CopyFileW(m_szFile,path_buf,TRUE)) {
			MessageBoxW(pCmdInfo->hwnd, _T("Copy Success"), _T("Copy Success"), MB_ICONINFORMATION);
		}
		else {
			MessageBoxW(pCmdInfo->hwnd, _T("Copy Fail"), _T("Copy Fail"), MB_ICONINFORMATION);
		}
		*/

		WIN32_FILE_ATTRIBUTE_DATA fInfo;
		GetFileAttributesExW(m_szFile, GetFileExInfoStandard, &fInfo);

		//Directory
		if (fInfo.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
			_tmakepath_s(path_buf, drive, dir, fname, NULL);

			SHFILEOPSTRUCTW s = { 0 };
			s.wFunc = FO_COPY;
			s.fFlags = FOF_SILENT;
			s.pTo = _T("C:\\temp\0");
			s.pFrom = path_buf;
			//SHFileOperationW(&s);

			if (!SHFileOperationW(&s)) {
				MessageBoxW(pCmdInfo->hwnd, _T("Copy Success"), _T("Directory Copy Success"), MB_ICONINFORMATION);
			}
			else {
				MessageBoxW(pCmdInfo->hwnd, _T("Copy Fail"), _T("Directory Copy Fail"), MB_ICONINFORMATION);
			}
		}
		//File
		else {
			_tmakepath_s(path_buf, _T("C"), _T("\\temp\\"), fname, ext);

			if (CopyFileW(m_szFile, path_buf, TRUE)) {
				MessageBoxW(pCmdInfo->hwnd, _T("Copy Success"), _T("File Copy Success"), MB_ICONINFORMATION);
			}
			else {
				MessageBoxW(pCmdInfo->hwnd, _T("Copy Fail"), _T("File Copy Fail"), MB_ICONINFORMATION);
			}
		}

		return S_OK;
	}
	break;

	//move
	case 2:
	{
		TCHAR path_buf[MAX_PATH];
		TCHAR drive[_MAX_DRIVE];
		TCHAR dir[_MAX_DIR];
		TCHAR fname[_MAX_FNAME];
		TCHAR ext[_MAX_EXT];

		_tsplitpath_s(m_szFile, drive, dir, fname, ext);
		_tmakepath_s(path_buf, _T("C"), _T("\\temp\\"), fname, ext);

		if (MoveFileW(m_szFile, path_buf)) {
			MessageBoxW(pCmdInfo->hwnd, _T("Move Success"), _T("Move Success"), MB_ICONINFORMATION);
		}
		else {
			MessageBoxW(pCmdInfo->hwnd, _T("Move Fail\n\nFile Already Exists!!"), _T("Move Fail"), MB_ICONINFORMATION);
		}


		return S_OK;
	}
	break;

	//delete
	case 3:
	{

		if (!_wremove(m_szFile)) {
			MessageBoxW(pCmdInfo->hwnd, _T("Delete Success"), _T("Delete Success"), MB_ICONINFORMATION);
		}
		else {
			MessageBoxW(pCmdInfo->hwnd, _T("Delete Fail"), _T("Delete Fail"), MB_ICONINFORMATION);
		}
		return S_OK;
	}
	break;

	default:
		return E_INVALIDARG;
		break;
	}
}