﻿// dllmain.cpp : DllMain의 구현입니다.

#include "stdafx.h"
#include "resource.h"
#include "SimpleShlExt_i.h"
#include "dllmain.h"
#include "xdlldata.h"

CSimpleShlExtModule _AtlModule;

// DLL 진입점입니다.
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
#ifdef _MERGE_PROXYSTUB
	if (!PrxDllMain(hInstance, dwReason, lpReserved))
		return FALSE;
#endif
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved);
}
