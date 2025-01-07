// ex4.h : main header file for the EX4 application
//

#if !defined(AFX_EX4_H__D9D3B84B_A15F_4694_AF03_46FA22264F70__INCLUDED_)
#define AFX_EX4_H__D9D3B84B_A15F_4694_AF03_46FA22264F70__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CEx4App:
// See ex4.cpp for the implementation of this class
//

class CEx4App : public CWinApp
{
public:
	CEx4App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx4App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CEx4App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX4_H__D9D3B84B_A15F_4694_AF03_46FA22264F70__INCLUDED_)
