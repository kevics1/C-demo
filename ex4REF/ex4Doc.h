// ex4Doc.h : interface of the CEx4Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX4DOC_H__A0C13523_9C37_4B10_8889_873FBC7F5C0D__INCLUDED_)
#define AFX_EX4DOC_H__A0C13523_9C37_4B10_8889_873FBC7F5C0D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx4Doc : public CDocument
{
protected: // create from serialization only
	CEx4Doc();
	DECLARE_DYNCREATE(CEx4Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx4Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEx4Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEx4Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX4DOC_H__A0C13523_9C37_4B10_8889_873FBC7F5C0D__INCLUDED_)
