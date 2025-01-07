// Circle.h: interface for the Circle class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CIRCLE_H__71C03879_AFF1_4781_AC55_9C2958E0E93B__INCLUDED_)
#define AFX_CIRCLE_H__71C03879_AFF1_4781_AC55_9C2958E0E93B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Polygon.h"

class Circle : public TPolygon
{
private:
	float m_CenterX;
	float m_CenterY;
	float m_radius;
public:
	void Draw(CDC *pDC);
	Circle();
	virtual ~Circle();
	Circle(float x, float y, float r) : m_CenterX(x), m_CenterY(y), m_radius(r) 
	{  cout<<"Circle 自定义构造函数调用!"<<endl; m_Color = 1; };

	void SetData(float CenterX, float CenterY, float Radius);
	void ReadData(float &CenterX, float &CenterY, float &Radius);

	float Area();
	float Perimeter();
	bool TestHit(Point HitP);
};

#endif // !defined(AFX_CIRCLE_H__71C03879_AFF1_4781_AC55_9C2958E0E93B__INCLUDED_)
