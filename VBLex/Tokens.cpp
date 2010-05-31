// Tokens.cpp : CTokens の実装

#include "stdafx.h"
#include "Tokens.h"


// CTokens


STDMETHODIMP CTokens::Item(VARIANT Index, VARIANT* pItem)
{
	VariantInit(pItem);

	// TODO:引数の型はLONGにする
	if (Index.vt != VT_I4)
		return E_INVALIDARG;

	// 無効なインデックスはエラーにする
	if (Index.lVal > m_vector.size() || Index.lVal <= 0)
		return E_INVALIDARG;

	// TokenオブジェクトのIDispatchインターフェースを返す
	pItem->vt = VT_DISPATCH;
	IToken* pToken = m_vector.at(Index.lVal);
	return pToken->QueryInterface(IID_IDispatch, (void**) &(pItem->pdispVal));
}

STDMETHODIMP CTokens::get_Count(LONG* pVal)
{
	*pVal = m_vector.size();
	return S_OK;
}

STDMETHODIMP CTokens::get__NewEnum(LPUNKNOWN* pVal)
{
	// 一時的な配列を生成
	VARIANT* var = new VARIANT[m_vector.size()];
	std::vector<IToken*>::iterator it;
	int i = 0;
	for (it = m_vector.begin(); it != m_vector.end(); it++, i++)
	{
		VariantInit(&var[i]);
		var[i].vt = VT_DISPATCH;
		(*it)->QueryInterface(IID_IDispatch, (void**) &(var[i].pdispVal));
	}

	// 読みやすくするためifdef
	typedef CComObject< CComEnum< IEnumVARIANT,
									&IID_IEnumVARIANT,
									VARIANT,
									_Copy<VARIANT> > > EnumVar;

	// 列挙子を初期化
	EnumVar* pVar = new EnumVar;
	pVar->Init(&var[0], &var[i], NULL, AtlFlagCopy);

	// 一時的な配列を開放
	for (i = 0; i < m_vector.size(); i++)
		VariantClear(&var[i]);

	delete[] var;

	// 列挙子のIUnknownを返す
	pVar->QueryInterface(IID_IUnknown, (void**)pVal);

	return S_OK;
}

STDMETHODIMP CTokens::Add(IToken* pToken)
{
	m_vector.push_back(pToken);
	pToken->AddRef();

	return S_OK;
}
