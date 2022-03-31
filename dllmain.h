// dllmain.h: 模块类的声明。

class CTestModule : public ATL::CAtlDllModuleT< CTestModule >
{
public :
	DECLARE_LIBID(LIBID_TestLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TEST, "{c255a35d-567b-4c61-b395-c2dba61a086b}")
};

extern class CTestModule _AtlModule;
