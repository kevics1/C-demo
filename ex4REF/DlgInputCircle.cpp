// DlgInputCircle.cpp : implementation file
//

#include "stdafx.h"
#include "ex4.h"
#include "DlgInputCircle.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgInputCircle dialog


CDlgInputCircle::CDlgInputCircle(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgInputCircle::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgInputCircle)
	m_Radius = 0.0;
	m_X = 0.0;
	m_Y = 0.0;
	//}}AFX_DATA_INIT
}


void CDlgInputCircle::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgInputCircle)
	DDX_Text(pDX, IDC_EDITRadius, m_Radius);
	DDX_Text(pDX, IDC_EDITX, m_X);
	DDX_Text(pDX, IDC_EDITY, m_Y);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgInputCircle, CDialog)
	//{{AFX_MSG_MAP(CDlgInputCircle)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgInputCircle message handlers
