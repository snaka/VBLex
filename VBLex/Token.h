// Token.h : CToken の宣言

#pragma once
#include "resource.h"       // メイン シンボル
#include <string>

#include "VBLex_i.h"

using namespace std;

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "DCOM の完全サポートを含んでいない Windows Mobile プラットフォームのような Windows CE プラットフォームでは、単一スレッド COM オブジェクトは正しくサポートされていません。ATL が単一スレッド COM オブジェクトの作成をサポートすること、およびその単一スレッド COM オブジェクトの実装の使用を許可することを強制するには、_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA を定義してください。ご使用の rgs ファイルのスレッド モデルは 'Free' に設定されており、DCOM Windows CE 以外のプラットフォームでサポートされる唯一のスレッド モデルと設定されていました。"
#endif



// CToken

class ATL_NO_VTABLE CToken :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CToken, &CLSID_Token>,
	public IDispatchImpl<IToken, &IID_IToken, &LIBID_VBLexLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CToken()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TOKEN)


BEGIN_COM_MAP(CToken)
	COM_INTERFACE_ENTRY(IToken)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHOD(get_Text)(BSTR* pVal) {
		m_text.CopyTo(pVal);
		return S_OK;
	}

	STDMETHOD(put_Text)(BSTR newVal) {
		m_text.Empty();
		m_text.AppendBSTR(newVal);
		return S_OK;
	}

	STDMETHOD(get_Type)(LONG* pVal) {
		*pVal = m_type;
		return S_OK;
	}

	STDMETHOD(put_Type)(LONG newVal) {
		m_type = newVal;
		return S_OK;
	}

	STDMETHOD(Init)(BSTR text, LONG _type) {
		m_text.Empty();
		m_text.AppendBSTR(text);

		m_type = _type;

		return S_OK;
	}

private:
	CComBSTR m_text;
	LONG	 m_type;

public:
};

OBJECT_ENTRY_AUTO(__uuidof(Token), CToken)
