#if !defined(AFX_DLGINPUTCIRCLE_H__7BE4F662_6C70_4D58_AB6B_55E525D728CB__INCLUDED_)
#define AFX_DLGINPUTCIRCLE_H__7BE4F662_6C70_4D58_AB6B_55E525D728CB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgInputCircle.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgInputCircle dialog

class CDlgInputCircle : public CDialog
{
// Construction
public:
	CDlgInputCircle(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgInputCircle)
	enum { IDD = IDD_DLG_InputCircle };
	double	m_Radius;
	double	m_X;
	double	m_Y;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgInputCircle)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgInputCircle)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGINPUTCIRCLE_H__7BE4F662_6C70_4D58_AB6B_55E525D728CB__INCLUDED_)
