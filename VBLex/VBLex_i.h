

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Thu Jun 03 01:25:24 2010
 */
/* Compiler settings for .\VBLex.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __VBLex_i_h__
#define __VBLex_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITokenizer_FWD_DEFINED__
#define __ITokenizer_FWD_DEFINED__
typedef interface ITokenizer ITokenizer;
#endif 	/* __ITokenizer_FWD_DEFINED__ */


#ifndef __IToken_FWD_DEFINED__
#define __IToken_FWD_DEFINED__
typedef interface IToken IToken;
#endif 	/* __IToken_FWD_DEFINED__ */


#ifndef __ITokens_FWD_DEFINED__
#define __ITokens_FWD_DEFINED__
typedef interface ITokens ITokens;
#endif 	/* __ITokens_FWD_DEFINED__ */


#ifndef __Tokenizer_FWD_DEFINED__
#define __Tokenizer_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tokenizer Tokenizer;
#else
typedef struct Tokenizer Tokenizer;
#endif /* __cplusplus */

#endif 	/* __Tokenizer_FWD_DEFINED__ */


#ifndef __Token_FWD_DEFINED__
#define __Token_FWD_DEFINED__

#ifdef __cplusplus
typedef class Token Token;
#else
typedef struct Token Token;
#endif /* __cplusplus */

#endif 	/* __Token_FWD_DEFINED__ */


#ifndef __Tokens_FWD_DEFINED__
#define __Tokens_FWD_DEFINED__

#ifdef __cplusplus
typedef class Tokens Tokens;
#else
typedef struct Tokens Tokens;
#endif /* __cplusplus */

#endif 	/* __Tokens_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITokenizer_INTERFACE_DEFINED__
#define __ITokenizer_INTERFACE_DEFINED__

/* interface ITokenizer */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITokenizer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96C91639-35F1-43D0-BB4F-06CE04135162")
    ITokenizer : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SourceText( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SourceText( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Tokens( 
            /* [retval][out] */ LPDISPATCH *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITokenizerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITokenizer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITokenizer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITokenizer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITokenizer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITokenizer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITokenizer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITokenizer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceText )( 
            ITokenizer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceText )( 
            ITokenizer * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tokens )( 
            ITokenizer * This,
            /* [retval][out] */ LPDISPATCH *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ITokenizer * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } ITokenizerVtbl;

    interface ITokenizer
    {
        CONST_VTBL struct ITokenizerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITokenizer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITokenizer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITokenizer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITokenizer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITokenizer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITokenizer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITokenizer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITokenizer_get_SourceText(This,pVal)	\
    ( (This)->lpVtbl -> get_SourceText(This,pVal) ) 

#define ITokenizer_put_SourceText(This,newVal)	\
    ( (This)->lpVtbl -> put_SourceText(This,newVal) ) 

#define ITokenizer_get_Tokens(This,pVal)	\
    ( (This)->lpVtbl -> get_Tokens(This,pVal) ) 

#define ITokenizer_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITokenizer_INTERFACE_DEFINED__ */


#ifndef __IToken_INTERFACE_DEFINED__
#define __IToken_INTERFACE_DEFINED__

/* interface IToken */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IToken;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3207DF5C-B2F0-4A5C-845C-A18868942DBC")
    IToken : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ BSTR text,
            /* [in] */ LONG type) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITokenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IToken * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IToken * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IToken * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IToken * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IToken * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IToken * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IToken * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IToken * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            IToken * This,
            /* [in] */ BSTR newVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IToken * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IToken * This,
            /* [in] */ LONG newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IToken * This,
            /* [in] */ BSTR text,
            /* [in] */ LONG type);
        
        END_INTERFACE
    } ITokenVtbl;

    interface IToken
    {
        CONST_VTBL struct ITokenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IToken_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IToken_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IToken_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IToken_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IToken_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IToken_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IToken_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IToken_get_Text(This,pVal)	\
    ( (This)->lpVtbl -> get_Text(This,pVal) ) 

#define IToken_put_Text(This,newVal)	\
    ( (This)->lpVtbl -> put_Text(This,newVal) ) 

#define IToken_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IToken_put_Type(This,newVal)	\
    ( (This)->lpVtbl -> put_Type(This,newVal) ) 

#define IToken_Init(This,text,type)	\
    ( (This)->lpVtbl -> Init(This,text,type) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IToken_INTERFACE_DEFINED__ */


#ifndef __ITokens_INTERFACE_DEFINED__
#define __ITokens_INTERFACE_DEFINED__

/* interface ITokens */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITokens;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("69FBF5BC-B607-465A-BB5C-4FE323761111")
    ITokens : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pItem) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IToken *pToken) = 0;
        
        virtual /* [restricted][helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ LPUNKNOWN *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITokensVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITokens * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITokens * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITokens * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITokens * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITokens * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITokens * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITokens * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            ITokens * This,
            /* [in] */ VARIANT Index,
            /* [retval][out] */ VARIANT *pItem);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITokens * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ITokens * This,
            /* [in] */ IToken *pToken);
        
        /* [restricted][helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ITokens * This,
            /* [retval][out] */ LPUNKNOWN *pVal);
        
        END_INTERFACE
    } ITokensVtbl;

    interface ITokens
    {
        CONST_VTBL struct ITokensVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITokens_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITokens_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITokens_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITokens_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITokens_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITokens_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITokens_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITokens_Item(This,Index,pItem)	\
    ( (This)->lpVtbl -> Item(This,Index,pItem) ) 

#define ITokens_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ITokens_Add(This,pToken)	\
    ( (This)->lpVtbl -> Add(This,pToken) ) 

#define ITokens_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITokens_INTERFACE_DEFINED__ */



#ifndef __VBLexLib_LIBRARY_DEFINED__
#define __VBLexLib_LIBRARY_DEFINED__

/* library VBLexLib */
/* [helpstring][version][uuid] */ 


enum VBLexTokenTypes
    {	TkBLANK	= 1,
	TkNL	= ( TkBLANK + 1 ) ,
	TkOP	= ( TkNL + 1 ) ,
	TkPUNC	= ( TkOP + 1 ) ,
	TkSTRING	= ( TkPUNC + 1 ) ,
	TkSTMT	= ( TkSTRING + 1 ) ,
	TkKEYW	= ( TkSTMT + 1 ) ,
	TkCOND	= ( TkKEYW + 1 ) ,
	TkPROC	= ( TkCOND + 1 ) ,
	TkENDPROC	= ( TkPROC + 1 ) ,
	TkVB	= ( TkENDPROC + 1 ) ,
	TkIDENT	= ( TkVB + 1 ) ,
	TkDIGIT	= ( TkIDENT + 1 ) ,
	TkCOMMENT	= ( TkDIGIT + 1 ) ,
	TkOTHER	= ( TkCOMMENT + 1 ) 
    } ;

EXTERN_C const IID LIBID_VBLexLib;

EXTERN_C const CLSID CLSID_Tokenizer;

#ifdef __cplusplus

class DECLSPEC_UUID("354E049F-07D9-40F0-B3D0-2B831C3B1205")
Tokenizer;
#endif

EXTERN_C const CLSID CLSID_Token;

#ifdef __cplusplus

class DECLSPEC_UUID("4BE67AD1-0498-47A2-AE04-9534424AA3C6")
Token;
#endif

EXTERN_C const CLSID CLSID_Tokens;

#ifdef __cplusplus

class DECLSPEC_UUID("45E01B49-77D1-4B1E-8D53-DB8EF4865692")
Tokens;
#endif
#endif /* __VBLexLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


