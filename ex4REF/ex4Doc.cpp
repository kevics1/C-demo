// ex4Doc.cpp : implementation of the CEx4Doc class
//

#include "stdafx.h"
#include "ex4.h"

#include "ex4Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx4Doc

IMPLEMENT_DYNCREATE(CEx4Doc, CDocument)

BEGIN_MESSAGE_MAP(CEx4Doc, CDocument)
	//{{AFX_MSG_MAP(CEx4Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx4Doc construction/destruction

CEx4Doc::CEx4Doc()
{
	// TODO: add one-time construction code here

}

CEx4Doc::~CEx4Doc()
{
}

BOOL CEx4Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx4Doc serialization

void CEx4Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CEx4Doc diagnostics

#ifdef _DEBUG
void CEx4Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx4Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx4Doc commands
