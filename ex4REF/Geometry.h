// Geometry.h: interface for the Geometry class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GEOMETRY_H__854531F2_2C19_41B3_A04E_49F2F3C2DDBB__INCLUDED_)
#define AFX_GEOMETRY_H__854531F2_2C19_41B3_A04E_49F2F3C2DDBB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//#include "PointClass.h"
class Point;
class Geometry  
{
public:
	Geometry() { m_Color = 0; };
	virtual ~Geometry() {};

protected:
	int m_Color;

public:
	void SetColor(int Color) { m_Color = Color; };
	int GetColor() { return m_Color; };

public:
	virtual void Draw(CDC *pDC);
	virtual bool TestHit(Point HitP) = 0;
};

#endif // !defined(AFX_GEOMETRY_H__854531F2_2C19_41B3_A04E_49F2F3C2DDBB__INCLUDED_)
