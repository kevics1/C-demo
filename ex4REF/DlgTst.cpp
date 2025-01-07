// DlgTst.cpp : implementation file
//

#include "stdafx.h"
#include "ex4.h"
#include "DlgTst.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgTst dialog


CDlgTst::CDlgTst(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgTst::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgTst)
	m_EditString = _T("");
	//}}AFX_DATA_INIT
}


void CDlgTst::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgTst)
	DDX_Control(pDX, IDC_EDIT1, m_EditCtrl);
	DDX_Text(pDX, IDC_EDIT1, m_EditString);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgTst, CDialog)
	//{{AFX_MSG_MAP(CDlgTst)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgTst message handlers

void CDlgTst::OnButton1() 
{
	// TODO: Add your control notification handler code here
	m_EditString = "xxxxxxxx";
	UpdateData(false);
}

void CDlgTst::OnButton2() 
{
	// TODO: Add your control notification handler code here
	UpdateData(true);
	MessageBox(m_EditString);
}

void CDlgTst::OnButton3() 
{
	// TODO: Add your control notification handler code here
	m_EditCtrl.Clear();
}
