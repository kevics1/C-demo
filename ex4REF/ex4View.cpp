// ex4View.cpp : implementation of the CEx4View class
//

#include "stdafx.h"
#include "ex4.h"

#include "ex4Doc.h"
#include "ex4View.h"

#include "DlgInputCircle.h"
#include "DlgInputPnt.h"
#include "DlgInputSquare.h"
#include "DlgTst.h"

#include "GeoTools.h"
#include "Geos.h"
#include <vector>
#include <fstream>
using namespace std;


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx4View

IMPLEMENT_DYNCREATE(CEx4View, CView)

BEGIN_MESSAGE_MAP(CEx4View, CView)
	//{{AFX_MSG_MAP(CEx4View)
	ON_COMMAND(ID_ReadData, OnReadData)
	ON_COMMAND(ID_TestHit, OnTestHit)
	ON_COMMAND(ID_NewCircle, OnNewCircle)
	ON_COMMAND(ID_DrawPoint, OnDrawPoint)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_ShowTstDlg, OnShowTstDlg)
	ON_WM_KEYDOWN()
	ON_COMMAND(ID_NewSquare, OnNewSquare)
	ON_COMMAND(ID_CDCTST, OnCdctst)
	ON_COMMAND(ID_GT_NewPoint, OnGTNewPoint)
	ON_COMMAND(ID_GT_NewRec, OnGTNewRec)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_COMMAND(ID_GT_HitSel, OnGTHitSel)
	ON_COMMAND(ID_NewPolyline, OnNewPolyline)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_MaxArea, OnMaxArea)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx4View construction/destruction

CEx4View::CEx4View()
{
	// TODO: add construction code here
	m_pSelectedGeo = NULL;
	m_pMapTool = NULL;

}

CEx4View::~CEx4View()
{
	for (int i=0; i<m_GeoList.size(); i++)
	{
		delete m_GeoList[i];
		m_GeoList[i] = NULL;
	}
}

BOOL CEx4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx4View drawing

void CEx4View::OnDraw(CDC* pDC)
{
	CEx4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	pDC->SetROP2(R2_COPYPEN);
	for (int i=0; i<m_GeoList.size(); i++)
	{
		Geometry *pGeo = m_GeoList[i];
		pGeo->Draw(pDC);
	}
	if (m_pSelectedGeo != NULL)
	{
		CPen tPen(PS_SOLID,2,RGB(255,0,0));
		CDC *pDC = GetDC();
		CPen *SavPen = pDC->SelectObject(&tPen);
		m_pSelectedGeo->Draw(pDC);
		pDC->SelectObject(SavPen);
	}

}

/////////////////////////////////////////////////////////////////////////////
// CEx4View printing

BOOL CEx4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CEx4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CEx4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CEx4View diagnostics

#ifdef _DEBUG
void CEx4View::AssertValid() const
{
	CView::AssertValid();
}

void CEx4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx4Doc* CEx4View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx4Doc)));
	return (CEx4Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx4View message handlers

void CEx4View::OnReadData() 
{
	// TODO: Add your command handler code here
		ifstream DataFile;  //定义一个文件流
		DataFile.open("data.txt");  //读取实验数据
		while (!DataFile.eof())
		{
			int Type;
			double x,y,radius;
			double l,r,b,t;
			Geometry *pGeo = NULL;
			
			DataFile>>Type; 
			switch (Type)
			{
			case 0: //读取点
				{
					DataFile>>x>>y;
					pGeo = new Point(x,y);
					break;
				}
			case 1: //读取圆
				{
					DataFile>>x>>y>>radius;
					pGeo = new Circle(x,y,radius);
					break;
				}
			case 2: //读取矩形
				{
					DataFile>>l>>r>>b>>t;
					pGeo = new Rect(l,r,b,t);
					break;
				}
			case 3: //读取正方形
				{
					DataFile>>l>>b>>radius;
					pGeo = new Square(l,b,radius);
					break;
				}
			default: continue;
			}
			m_GeoList.push_back(pGeo);
		}
		
		DataFile.close();
		Invalidate();  //刷新立即显示图形
}

void CEx4View::OnTestHit() 
{
	// TODO: Add your command handler code here
	Point TstP(2,2);
	for (int i=0; i<m_GeoList.size(); i++)
	{
		CString msg;
		msg.Format("%d--击中！",i);
		
		if (m_GeoList[i]->TestHit(TstP))
		{
			MessageBox(msg);
		}
		
		Geometry *pGeo = m_GeoList[i];
		
		TPolygon *pPoly = dynamic_cast<TPolygon *>(pGeo);  // 判断 pGeo 是否指向一个 TPolygon 对象
		
		if (pPoly != NULL)
		{
			msg.Format("%d--多边形！",i);
			MessageBox(msg);
		}
		delete m_GeoList[i];
		m_GeoList[i] = NULL;
	}
	//m_GeoList.clear();
	
}

void CEx4View::OnNewCircle() 
{
	// TODO: Add your command handler code here
	CDlgInputCircle Dlg;
// 	Dlg.Create(IDD_DLG_InputCircle);
// 	Dlg.ShowWindow(SW_SHOW);
	if (Dlg.DoModal() == IDOK)
	{
		double x = Dlg.m_X;
		double y = Dlg.m_Y;
		double r = Dlg.m_Radius;
		Geometry *pGeo = new Circle(x,y,r);
		m_GeoList.push_back(pGeo);
		Invalidate();
	}

	//MessageBox("ffffff");
}

void CEx4View::OnDrawPoint() 
{
	// TODO: Add your command handler code here
// 	CDC *pDC = GetDC();
// 
// 	Point pp(400,400);
// 	pp.Draw(pDC);
// 
// 
// 	Rect rr(100,200,300,500);
// 	Square ss(400,100,200);
// 	rr.Draw(pDC);
// 	ss.Draw(pDC);
// 
// 	Circle cc(60,60,40);
// 	cc.Draw(pDC);
	CDlgInputPnt Dlg;
	if (Dlg.DoModal() == IDOK)
	{
		double x = Dlg.m_X;
		double y = Dlg.m_Y;
		Geometry *pGeo = new Point(x,y);
		m_GeoList.push_back(pGeo);
		Invalidate();
	}
}

void CEx4View::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default

	if (m_pMapTool != NULL)
	{
		m_pMapTool->OnLButtonDown(nFlags,point);
	}

	CView::OnLButtonDown(nFlags, point);
}

void CEx4View::OnShowTstDlg() 
{
	// TODO: Add your command handler code here
    CDlgTst *pDlg = new CDlgTst;
	pDlg->Create(IDD_DLG_Tst,this);
	pDlg->ShowWindow(SW_SHOW);

	//CDlgTst Dlg;
	//Dlg.DoModal();
}

void CEx4View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}

void CEx4View::OnNewSquare() 
{
	// TODO: Add your command handler code here
	CDlgInputSquare dlg;

	if (dlg.DoModal() == IDOK)
	{
		double x = dlg.m_X;
		double y = dlg.m_Y;
		double width = dlg.m_R;
		Geometry *pGeo = new Square(x,y,width);
		m_GeoList.push_back(pGeo);
		Invalidate();
	}
}

void CEx4View::OnCdctst() 
{
	// TODO: Add your command handler code here
	CString a="1111";
	CString b="22222";


	MessageBox(a+b);
	return;




	CDC *pDC = GetDC();

	pDC->TextOut(100,100,"asodfjsaodjf");

	POINT p;
	p.x = 100;
	p.y = 200;
	pDC->LineTo(p);

	pDC->BitBlt(310,310,200,200,pDC,0,0,SRCCOPY);
}

void CEx4View::AddGeo(Geometry *pGeo)
{
	m_GeoList.push_back(pGeo);
    Invalidate();
}

void CEx4View::OnGTNewPoint() 
{
	// TODO: Add your command handler code here
	if (m_pMapTool != NULL)
	{
		delete m_pMapTool;
		m_pMapTool = NULL;
	} 
	m_pMapTool = new TGToolNewPoint;
	m_pMapTool->StartTool(this);
	m_pMapTool->OnClick();
}

void CEx4View::OnGTNewRec() 
{
	// TODO: Add your command handler code here
	if (m_pMapTool != NULL)
	{
		delete m_pMapTool;
		m_pMapTool = NULL;
	} 
	m_pMapTool = new TGToolNewRect;
	m_pMapTool->StartTool(this);
	m_pMapTool->OnClick();
	
}

void CEx4View::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default

	if (m_pMapTool != NULL)
	{
	    m_pMapTool->OnMouseMove(nFlags,point);
	}

	CView::OnMouseMove(nFlags, point);
}

void CEx4View::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default

	if (m_pMapTool != NULL)
	{
	    m_pMapTool->OnLButtonUp(nFlags,point);
	}
	CView::OnLButtonUp(nFlags, point);
}

void CEx4View::OnLButtonDblClk(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if (m_pMapTool != NULL)
	{
		m_pMapTool->OnLButtonDblClk(nFlags,point);
	}
	
	CView::OnLButtonDblClk(nFlags, point);
}

bool CEx4View::HitSelect(Point HitP)
{
	bool bFound = false;
	int i = 0;
	for (i=0; i<m_GeoList.size(); i++)
	{
		bFound = m_GeoList[i]->TestHit(HitP);
		if (bFound) break;
	}
	m_pSelectedGeo = bFound ? m_GeoList[i] : NULL;
	if (bFound) Invalidate();
	return false;
}

void CEx4View::OnGTHitSel() 
{
	// TODO: Add your command handler code here
	if (m_pMapTool != NULL)
	{
		delete m_pMapTool;
		m_pMapTool = NULL;
	} 
	m_pMapTool = new TGToolSelHit;
	m_pMapTool->StartTool(this);
	m_pMapTool->OnClick();
}

void CEx4View::OnNewPolyline() 
{
	// TODO: Add your command handler code here
	if (m_pMapTool != NULL)
	{
		delete m_pMapTool;
		m_pMapTool = NULL;
	} 
	m_pMapTool = new TGToolNewLine;
	m_pMapTool->StartTool(this);
	m_pMapTool->OnClick();
	return;
	 


	Geometry *pGeo;
	TPolyline *pLine = new TPolyline;
	Point p0(700,100);
	pLine->AddPoint(p0);
	Point p1(600,200);
	pLine->AddPoint(p1);
	Point p2(600,300);
	pLine->AddPoint(p2);
	Point p3(500,400);
	pLine->AddPoint(p3);

	m_GeoList.push_back(pLine);
	Invalidate();

}


void CEx4View::OnMaxArea() 
{
	// TODO: Add your command handler code here
	double MaxArea = 0;
	
	for (int i=0; i<m_GeoList.size(); i++)
	{
		Geometry *pGeo = m_GeoList[i];
		TPolygon *pPoly = dynamic_cast<TPolygon *>(pGeo);  // 判断 pGeo 是否指向一个 TPolygon 对象
		
		if (pPoly != NULL)
		{
			double Area = pPoly->Area();
			if (Area>MaxArea)
			{
				MaxArea = Area;
				m_pSelectedGeo = pPoly;
			}
		}
	}
	if (MaxArea>0.1)
	{
		CString str;
		str.Format("最大面积：%f", MaxArea);
		Invalidate();
		MessageBox(str);
	}
	
}
