

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for Test.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
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

#ifndef __Test_i_h__
#define __Test_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IJisuanqi_FWD_DEFINED__
#define __IJisuanqi_FWD_DEFINED__
typedef interface IJisuanqi IJisuanqi;

#endif 	/* __IJisuanqi_FWD_DEFINED__ */


#ifndef __Jisuanqi_FWD_DEFINED__
#define __Jisuanqi_FWD_DEFINED__

#ifdef __cplusplus
typedef class Jisuanqi Jisuanqi;
#else
typedef struct Jisuanqi Jisuanqi;
#endif /* __cplusplus */

#endif 	/* __Jisuanqi_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IJisuanqi_INTERFACE_DEFINED__
#define __IJisuanqi_INTERFACE_DEFINED__

/* interface IJisuanqi */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IJisuanqi;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fe5b020e-cbff-43cd-aa42-e3097408f312")
    IJisuanqi : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Number( 
            /* [in] */ LONG __num,
            /* [retval][out] */ LONG *__result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IJisuanqiVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IJisuanqi * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IJisuanqi * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IJisuanqi * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IJisuanqi * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IJisuanqi * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IJisuanqi * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IJisuanqi * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Number )( 
            IJisuanqi * This,
            /* [in] */ LONG __num,
            /* [retval][out] */ LONG *__result);
        
        END_INTERFACE
    } IJisuanqiVtbl;

    interface IJisuanqi
    {
        CONST_VTBL struct IJisuanqiVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJisuanqi_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IJisuanqi_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IJisuanqi_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IJisuanqi_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IJisuanqi_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IJisuanqi_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IJisuanqi_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IJisuanqi_Number(This,__num,__result)	\
    ( (This)->lpVtbl -> Number(This,__num,__result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IJisuanqi_INTERFACE_DEFINED__ */



#ifndef __TestLib_LIBRARY_DEFINED__
#define __TestLib_LIBRARY_DEFINED__

/* library TestLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_TestLib;

EXTERN_C const CLSID CLSID_Jisuanqi;

#ifdef __cplusplus

class DECLSPEC_UUID("589dbacf-4f9b-4ec8-8fbf-23d9d933c545")
Jisuanqi;
#endif
#endif /* __TestLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


