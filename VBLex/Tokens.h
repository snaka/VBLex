// Tokens.h : CTokens の宣言

#pragma once
#include "resource.h"       // メイン シンボル
#include <vector>
#include "VBLex_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "DCOM の完全サポートを含んでいない Windows Mobile プラットフォームのような Windows CE プラットフォームでは、単一スレッド COM オブジェクトは正しくサポートされていません。ATL が単一スレッド COM オブジェクトの作成をサポートすること、およびその単一スレッド COM オブジェクトの実装の使用を許可することを強制するには、_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA を定義してください。ご使用の rgs ファイルのスレッド モデルは 'Free' に設定されており、DCOM Windows CE 以外のプラットフォームでサポートされる唯一のスレッド モデルと設定されていました。"
#endif



// CTokens

class ATL_NO_VTABLE CTokens :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTokens, &CLSID_Tokens>,
	public IDispatchImpl<ITokens, &IID_ITokens, &LIBID_VBLexLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTokens()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TOKENS)


BEGIN_COM_MAP(CTokens)
	COM_INTERFACE_ENTRY(ITokens)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
		// vectorのオブジェクトを開放
		std::vector<IToken*>::iterator it;
		for (it = m_vector.begin(); it != m_vector.end(); it++)
			(*it)->Release();
	}

public:

	STDMETHOD(Item)(VARIANT Index, VARIANT* pItem);
	STDMETHOD(Add)(IToken* pToken);
	STDMETHOD(get_Count)(LONG* pVal);
	STDMETHOD(get__NewEnum)(LPUNKNOWN* pVal);

private:

	std::vector<IToken*> m_vector;
	
};

OBJECT_ENTRY_AUTO(__uuidof(Tokens), CTokens)
