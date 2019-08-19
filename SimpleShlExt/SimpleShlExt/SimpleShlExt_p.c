

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for SimpleShlExt.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "SimpleShlExt_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _SimpleShlExt_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } SimpleShlExt_MIDL_TYPE_FORMAT_STRING;

typedef struct _SimpleShlExt_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } SimpleShlExt_MIDL_PROC_FORMAT_STRING;

typedef struct _SimpleShlExt_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } SimpleShlExt_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};



extern const SimpleShlExt_MIDL_TYPE_FORMAT_STRING SimpleShlExt__MIDL_TypeFormatString;
extern const SimpleShlExt_MIDL_PROC_FORMAT_STRING SimpleShlExt__MIDL_ProcFormatString;
extern const SimpleShlExt_MIDL_EXPR_FORMAT_STRING SimpleShlExt__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IShlExt_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IShlExt_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const SimpleShlExt_MIDL_PROC_FORMAT_STRING SimpleShlExt__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const SimpleShlExt_MIDL_TYPE_FORMAT_STRING SimpleShlExt__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IShlExt, ver. 0.0,
   GUID={0x979bcbb2,0x0e8b,0x4a7d,{0x88,0x5b,0x96,0x46,0x4c,0xdd,0x8c,0x7a}} */

#pragma code_seg(".orpc")
static const unsigned short IShlExt_FormatStringOffsetTable[] =
    {
    0
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for SimpleShlExt.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IShlExt, ver. 0.0,
   GUID={0x979bcbb2,0x0e8b,0x4a7d,{0x88,0x5b,0x96,0x46,0x4c,0xdd,0x8c,0x7a}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IShlExt_Ndr64ProcTable[] =
    {
    0
    };


static const MIDL_SYNTAX_INFO IShlExt_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    SimpleShlExt__MIDL_ProcFormatString.Format,
    &IShlExt_FormatStringOffsetTable[-3],
    SimpleShlExt__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IShlExt_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IShlExt_ProxyInfo =
    {
    &Object_StubDesc,
    SimpleShlExt__MIDL_ProcFormatString.Format,
    &IShlExt_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IShlExt_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IShlExt_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    SimpleShlExt__MIDL_ProcFormatString.Format,
    (unsigned short *) &IShlExt_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    2,
    (MIDL_SYNTAX_INFO*)IShlExt_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(3) _IShlExtProxyVtbl = 
{
    0,
    &IID_IShlExt,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy
};

const CInterfaceStubVtbl _IShlExtStubVtbl =
{
    &IID_IShlExt,
    &IShlExt_ServerInfo,
    3,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    SimpleShlExt__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _SimpleShlExt_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IShlExtProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _SimpleShlExt_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IShlExtStubVtbl,
    0
};

PCInterfaceName const _SimpleShlExt_InterfaceNamesList[] = 
{
    "IShlExt",
    0
};


#define _SimpleShlExt_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _SimpleShlExt, pIID, n)

int __stdcall _SimpleShlExt_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_SimpleShlExt_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo SimpleShlExt_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _SimpleShlExt_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _SimpleShlExt_StubVtblList,
    (const PCInterfaceName * ) & _SimpleShlExt_InterfaceNamesList,
    0, /* no delegation */
    & _SimpleShlExt_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

