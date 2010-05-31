// Tokenizer.cpp : CTokenizer ‚ÌŽÀ‘•

#include "stdafx.h"
#include "atlsafe.h"
#include "comutil.h"
#include "Tokenizer.h"
#include "Token.h"
#include "FlexLexer.h"
#include "vblexDefs.h"

// CTokenizer

extern char string_buff[];

STDMETHODIMP CTokenizer::get_SourceText(BSTR* pVal)
{
	m_sourceText.CopyTo(pVal);

	return S_OK;
}

STDMETHODIMP CTokenizer::put_SourceText(BSTR newVal)
{
	m_sourceText.Empty();
	m_sourceText.Append(newVal);

	return S_OK;
}

STDMETHODIMP CTokenizer::get_Tokens(LPDISPATCH* pDisp)
{
	HRESULT hr;

	if (m_sourceText.Length() <= 0)
		return E_FAIL;

	string str(_bstr_t(m_sourceText.m_str));
	istringstream iss(str);

	FlexLexer* lex = new yyFlexLexer(&iss);

	int ret;

	while((ret = lex->yylex()) != 0)
	{
		switch(ret)
		{
		case TkBLANK:
			break;

		default:
			CComObject<CToken>* tok;
			
			HRESULT hr = CComObject<CToken>::CreateInstance(&tok);
			if (FAILED(hr))
				return hr;

			if (ret == TkSTRING)
				tok->Init(CComBSTR(string_buff).m_str, ret);
			else
				tok->Init(CComBSTR(lex->YYText()).m_str, ret);
			
			m_tokens->Add(tok);
		}
	}	

	*pDisp = m_tokens;
	(*pDisp)->AddRef();

	return S_OK;
}

