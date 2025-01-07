// DlgInputPnt.cpp : implementation file
//

#include "stdafx.h"
#include "ex4.h"
#include "DlgInputPnt.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgInputPnt dialog


CDlgInputPnt::CDlgInputPnt(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgInputPnt::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgInputPnt)
	m_X = 0.0;
	m_Y = 0.0;
	//}}AFX_DATA_INIT
}


void CDlgInputPnt::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgInputPnt)
	DDX_Text(pDX, IDC_EDITX, m_X);
	DDX_Text(pDX, IDC_EDITY, m_Y);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgInputPnt, CDialog)
	//{{AFX_MSG_MAP(CDlgInputPnt)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgInputPnt message handlers
