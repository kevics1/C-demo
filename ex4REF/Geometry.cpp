// Geometry.cpp: implementation of the Geometry class.
//
//////////////////////////////////////////////////////////////////////
#include "stdafx.h"


#include "Geometry.h"
#include "PointClass.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

void Geometry::Draw(CDC *pDC)
{
	COLORREF GeoColor;
	switch (m_Color)
	{
	case 0: GeoColor = RGB(255,255,255); break;
	case 1: GeoColor = RGB(255,0,0); break;
	case 2: GeoColor = RGB(0,255,0); break; 
	case 3: GeoColor = RGB(0,0,255); break;
	case 4: GeoColor = RGB(255,0,255); break;
	default: GeoColor = RGB(255,255,255); break;
	}
	CPen *pPen = new CPen(PS_SOLID,2,GeoColor);
	CPen *SavPen = pDC->SelectObject(pPen);
	delete SavPen;
	SavPen = NULL;
}

