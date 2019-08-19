// dllmain.h : 모듈 클래스의 선언입니다.

class CSimpleShlExtModule : public ATL::CAtlDllModuleT< CSimpleShlExtModule >
{
public :
	DECLARE_LIBID(LIBID_SimpleShlExtLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SIMPLESHLEXT, "{1914c8d6-cd99-44c3-a595-fc755687723c}")
};

extern class CSimpleShlExtModule _AtlModule;
