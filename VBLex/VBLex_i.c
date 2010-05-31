

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon May 31 02:12:11 2010
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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ITokenizer,0x96C91639,0x35F1,0x43D0,0xBB,0x4F,0x06,0xCE,0x04,0x13,0x51,0x62);


MIDL_DEFINE_GUID(IID, IID_IToken,0x3207DF5C,0xB2F0,0x4A5C,0x84,0x5C,0xA1,0x88,0x68,0x94,0x2D,0xBC);


MIDL_DEFINE_GUID(IID, IID_ITokens,0x69FBF5BC,0xB607,0x465A,0xBB,0x5C,0x4F,0xE3,0x23,0x76,0x11,0x11);


MIDL_DEFINE_GUID(IID, LIBID_VBLexLib,0x2650EDFA,0x2516,0x4B6C,0xA5,0xC5,0xAC,0xB7,0xD5,0x08,0xFA,0xBF);


MIDL_DEFINE_GUID(CLSID, CLSID_Tokenizer,0x354E049F,0x07D9,0x40F0,0xB3,0xD0,0x2B,0x83,0x1C,0x3B,0x12,0x05);


MIDL_DEFINE_GUID(CLSID, CLSID_Token,0x4BE67AD1,0x0498,0x47A2,0xAE,0x04,0x95,0x34,0x42,0x4A,0xA3,0xC6);


MIDL_DEFINE_GUID(CLSID, CLSID_Tokens,0x45E01B49,0x77D1,0x4B1E,0x8D,0x53,0xDB,0x8E,0xF4,0x86,0x56,0x92);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



