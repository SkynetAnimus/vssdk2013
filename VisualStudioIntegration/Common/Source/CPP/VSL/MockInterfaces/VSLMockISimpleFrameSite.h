/***************************************************************************

Copyright (c) Microsoft Corporation. All rights reserved.
This code is licensed under the Visual Studio SDK license terms.
THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.

This code is a part of the Visual Studio Library.

***************************************************************************/

#ifndef ISIMPLEFRAMESITE_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
#define ISIMPLEFRAMESITE_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5

#if _MSC_VER > 1000
#pragma once
#endif

#include "OCIdl.h"

#pragma warning(push)
#pragma warning(disable : 4510) // default constructor could not be generated
#pragma warning(disable : 4610) // can never be instantiated - user defined constructor required
#pragma warning(disable : 4512) // assignment operator could not be generated
#pragma warning(disable : 6011) // Dereferencing NULL pointer (a NULL derference is just another kind of failure for a unit test

namespace VSL
{

class ISimpleFrameSiteNotImpl :
	public ISimpleFrameSite
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(ISimpleFrameSiteNotImpl)

public:

	typedef ISimpleFrameSite Interface;

	STDMETHOD(PreMessageFilter)(
		/*[in]*/ HWND /*hWnd*/,
		/*[in]*/ UINT /*msg*/,
		/*[in]*/ WPARAM /*wp*/,
		/*[in]*/ LPARAM /*lp*/,
		/*[out]*/ LRESULT* /*plResult*/,
		/*[out]*/ DWORD* /*pdwCookie*/)VSL_STDMETHOD_NOTIMPL

	STDMETHOD(PostMessageFilter)(
		/*[in]*/ HWND /*hWnd*/,
		/*[in]*/ UINT /*msg*/,
		/*[in]*/ WPARAM /*wp*/,
		/*[in]*/ LPARAM /*lp*/,
		/*[out]*/ LRESULT* /*plResult*/,
		/*[in]*/ DWORD /*dwCookie*/)VSL_STDMETHOD_NOTIMPL
};

class ISimpleFrameSiteMockImpl :
	public ISimpleFrameSite,
	public MockBase
{

VSL_DECLARE_NONINSTANTIABLE_BASE_CLASS(ISimpleFrameSiteMockImpl)

public:

VSL_DEFINE_MOCK_CLASS_TYPDEFS(ISimpleFrameSiteMockImpl)

	typedef ISimpleFrameSite Interface;
	struct PreMessageFilterValidValues
	{
		/*[in]*/ HWND hWnd;
		/*[in]*/ UINT msg;
		/*[in]*/ WPARAM wp;
		/*[in]*/ LPARAM lp;
		/*[out]*/ LRESULT* plResult;
		/*[out]*/ DWORD* pdwCookie;
		HRESULT retValue;
	};

	STDMETHOD(PreMessageFilter)(
		/*[in]*/ HWND hWnd,
		/*[in]*/ UINT msg,
		/*[in]*/ WPARAM wp,
		/*[in]*/ LPARAM lp,
		/*[out]*/ LRESULT* plResult,
		/*[out]*/ DWORD* pdwCookie)
	{
		VSL_DEFINE_MOCK_METHOD(PreMessageFilter)

		VSL_CHECK_VALIDVALUE(hWnd);

		VSL_CHECK_VALIDVALUE(msg);

		VSL_CHECK_VALIDVALUE(wp);

		VSL_CHECK_VALIDVALUE(lp);

		VSL_SET_VALIDVALUE(plResult);

		VSL_SET_VALIDVALUE(pdwCookie);

		VSL_RETURN_VALIDVALUES();
	}
	struct PostMessageFilterValidValues
	{
		/*[in]*/ HWND hWnd;
		/*[in]*/ UINT msg;
		/*[in]*/ WPARAM wp;
		/*[in]*/ LPARAM lp;
		/*[out]*/ LRESULT* plResult;
		/*[in]*/ DWORD dwCookie;
		HRESULT retValue;
	};

	STDMETHOD(PostMessageFilter)(
		/*[in]*/ HWND hWnd,
		/*[in]*/ UINT msg,
		/*[in]*/ WPARAM wp,
		/*[in]*/ LPARAM lp,
		/*[out]*/ LRESULT* plResult,
		/*[in]*/ DWORD dwCookie)
	{
		VSL_DEFINE_MOCK_METHOD(PostMessageFilter)

		VSL_CHECK_VALIDVALUE(hWnd);

		VSL_CHECK_VALIDVALUE(msg);

		VSL_CHECK_VALIDVALUE(wp);

		VSL_CHECK_VALIDVALUE(lp);

		VSL_SET_VALIDVALUE(plResult);

		VSL_CHECK_VALIDVALUE(dwCookie);

		VSL_RETURN_VALIDVALUES();
	}
};


} // namespace VSL

#pragma warning(pop)

#endif // ISIMPLEFRAMESITE_H_10C49CA1_2F46_11D3_A504_00C04F5E0BA5
