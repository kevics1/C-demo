#if !defined(AFX_DLGINPUTSQUARE_H__58275D8F_2084_483D_8FC3_2206E56583D8__INCLUDED_)
#define AFX_DLGINPUTSQUARE_H__58275D8F_2084_483D_8FC3_2206E56583D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgInputSquare.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgInputSquare dialog

class CDlgInputSquare : public CDialog
{
// Construction
public:
	CDlgInputSquare(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgInputSquare)
	enum { IDD = IDD_DLG_InputSquare };
	double	m_X;
	double	m_Y;
	double	m_R;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgInputSquare)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgInputSquare)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGINPUTSQUARE_H__58275D8F_2084_483D_8FC3_2206E56583D8__INCLUDED_)
