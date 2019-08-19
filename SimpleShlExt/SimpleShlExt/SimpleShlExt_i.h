

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SimpleShlExt_i_h__
#define __SimpleShlExt_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IShlExt_FWD_DEFINED__
#define __IShlExt_FWD_DEFINED__
typedef interface IShlExt IShlExt;

#endif 	/* __IShlExt_FWD_DEFINED__ */


#ifndef __ShlExt_FWD_DEFINED__
#define __ShlExt_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShlExt ShlExt;
#else
typedef struct ShlExt ShlExt;
#endif /* __cplusplus */

#endif 	/* __ShlExt_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IShlExt_INTERFACE_DEFINED__
#define __IShlExt_INTERFACE_DEFINED__

/* interface IShlExt */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IShlExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("979bcbb2-0e8b-4a7d-885b-96464cdd8c7a")
    IShlExt : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IShlExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShlExt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShlExt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShlExt * This);
        
        END_INTERFACE
    } IShlExtVtbl;

    interface IShlExt
    {
        CONST_VTBL struct IShlExtVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShlExt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShlExt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShlExt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShlExt_INTERFACE_DEFINED__ */



#ifndef __SimpleShlExtLib_LIBRARY_DEFINED__
#define __SimpleShlExtLib_LIBRARY_DEFINED__

/* library SimpleShlExtLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SimpleShlExtLib;

EXTERN_C const CLSID CLSID_ShlExt;

#ifdef __cplusplus

class DECLSPEC_UUID("b3578191-7cd7-4376-a3d2-d37f001accb6")
ShlExt;
#endif
#endif /* __SimpleShlExtLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


