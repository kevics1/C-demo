// ex4View.h : interface of the CEx4View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX4VIEW_H__A8520EC1_9F0D_45B7_96F9_BDE21302ACF9__INCLUDED_)
#define AFX_EX4VIEW_H__A8520EC1_9F0D_45B7_96F9_BDE21302ACF9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Geos.h"
#include <vector>
#include "TGeoBaseTool.h"	// Added by ClassView
using namespace std;


class CEx4View : public CView
{
protected: // create from serialization only
	CEx4View();
	DECLARE_DYNCREATE(CEx4View)

// Attributes
public:
	CEx4Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx4View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	bool HitSelect(Point HitP);
	void AddGeo(Geometry *pGeo);
	virtual ~CEx4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	vector<Geometry *> m_GeoList;
	Geometry *m_pSelectedGeo;

// Generated message map functions
protected:
	TGeoBaseTool *m_pMapTool;
	//{{AFX_MSG(CEx4View)
	afx_msg void OnReadData();
	afx_msg void OnTestHit();
	afx_msg void OnNewCircle();
	afx_msg void OnDrawPoint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnShowTstDlg();
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnNewSquare();
	afx_msg void OnCdctst();
	afx_msg void OnGTNewPoint();
	afx_msg void OnGTNewRec();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnGTHitSel();
	afx_msg void OnNewPolyline();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnMaxArea();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ex4View.cpp
inline CEx4Doc* CEx4View::GetDocument()
   { return (CEx4Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX4VIEW_H__A8520EC1_9F0D_45B7_96F9_BDE21302ACF9__INCLUDED_)
