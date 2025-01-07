#if !defined(AFX_DLGINPUTPNT_H__426916ED_F103_47B7_85CA_14B6BF5EC477__INCLUDED_)
#define AFX_DLGINPUTPNT_H__426916ED_F103_47B7_85CA_14B6BF5EC477__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgInputPnt.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgInputPnt dialog

class CDlgInputPnt : public CDialog
{
// Construction
public:
	CDlgInputPnt(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgInputPnt)
	enum { IDD = IDD_DLG_InputPnt };
	double	m_X;
	double	m_Y;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgInputPnt)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgInputPnt)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGINPUTPNT_H__426916ED_F103_47B7_85CA_14B6BF5EC477__INCLUDED_)
