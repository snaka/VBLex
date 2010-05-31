// Tokenizer.h : CTokenizer の宣言

#pragma once
#include "resource.h"       // メイン シンボル
#include "Tokens.h"
#include "VBLex_i.h"


#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "DCOM の完全サポートを含んでいない Windows Mobile プラットフォームのような Windows CE プラットフォームでは、単一スレッド COM オブジェクトは正しくサポートされていません。ATL が単一スレッド COM オブジェクトの作成をサポートすること、およびその単一スレッド COM オブジェクトの実装の使用を許可することを強制するには、_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA を定義してください。ご使用の rgs ファイルのスレッド モデルは 'Free' に設定されており、DCOM Windows CE 以外のプラットフォームでサポートされる唯一のスレッド モデルと設定されていました。"
#endif



// CTokenizer

class ATL_NO_VTABLE CTokenizer :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTokenizer, &CLSID_Tokenizer>,
	public IDispatchImpl<ITokenizer, &IID_ITokenizer, &LIBID_VBLexLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTokenizer()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TOKENIZER)


BEGIN_COM_MAP(CTokenizer)
	COM_INTERFACE_ENTRY(ITokenizer)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		HRESULT hr;

		// Create tokens collection 
		CComObject<CTokens>* pTokens;
		hr = CComObject<CTokens>::CreateInstance(&pTokens);
		if (FAILED(hr))
			return hr;

		m_tokens = pTokens;

		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHOD(get_SourceText)(BSTR* pVal);
	STDMETHOD(put_SourceText)(BSTR newVal);
	STDMETHOD(get_Tokens)(LPDISPATCH* pVal);
	STDMETHOD(get_Version)(BSTR* pVal){
		CComBSTR ver("Version 0.1");
		ver.CopyTo(pVal);
		return S_OK;
	}

private:

	CComBSTR m_sourceText;
	CComPtr<ITokens> m_tokens;

};

OBJECT_ENTRY_AUTO(__uuidof(Tokenizer), CTokenizer)
