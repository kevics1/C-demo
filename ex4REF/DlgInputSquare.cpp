// DlgInputSquare.cpp : implementation file
//

#include "stdafx.h"
#include "ex4.h"
#include "DlgInputSquare.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgInputSquare dialog


CDlgInputSquare::CDlgInputSquare(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgInputSquare::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgInputSquare)
	m_X = 0.0;
	m_Y = 0.0;
	m_R = 0.0;
	//}}AFX_DATA_INIT
}


void CDlgInputSquare::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgInputSquare)
	DDX_Text(pDX, IDC_EDITX, m_X);
	DDX_Text(pDX, IDC_EDITY, m_Y);
	DDX_Text(pDX, IDC_EDITRadius, m_R);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgInputSquare, CDialog)
	//{{AFX_MSG_MAP(CDlgInputSquare)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgInputSquare message handlers
