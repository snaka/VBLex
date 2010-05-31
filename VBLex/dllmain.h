// dllmain.h : モジュール クラスの宣言

class CVBLexModule : public CAtlDllModuleT< CVBLexModule >
{
public :
	DECLARE_LIBID(LIBID_VBLexLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VBLEX, "{04DF3F67-7304-49FB-B720-13853FA64F2B}")
};

extern class CVBLexModule _AtlModule;
