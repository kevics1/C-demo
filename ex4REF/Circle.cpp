// Circle.cpp: implementation of the Circle class.
//
//////////////////////////////////////////////////////////////////////
#include "stdafx.h"

#include <iostream>
using namespace std;
#include "PointClass.h"
#include "Circle.h"
#define PI 3.1415927

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Circle::Circle()
{
    cout<<"Circle 默认构造函数调用!"<<endl;
	m_Color = 1;
}

Circle::~Circle()
{
    cout<<"Circle 析构函数调用!"<<endl; 
}

float Circle::Area()
{
	return m_radius * m_radius * PI;
}

float Circle::Perimeter()
{
	return m_radius * 2.0 * PI;
}

bool Circle::TestHit(Point HitP)
{
	Point CircleCenter(m_CenterX, m_CenterY);
	float dis2C = HitP.Distance(CircleCenter);
	if (dis2C>m_radius) return false;
	else return true;
}

void Circle::ReadData(float &CenterX, float &CenterY, float &Radius)
{
	CenterX = m_CenterX;
    CenterY = m_CenterY;
	Radius = m_radius;
}

void Circle::SetData(float CenterX, float CenterY, float Radius)
{
    m_radius = Radius;
	m_CenterX = CenterX;
	m_CenterY = CenterY;
}

void Circle::Draw(CDC *pDC)
{
	RECT r;
	r.bottom = m_CenterY - m_radius;
	r.top = m_CenterY + m_radius;
	r.left = m_CenterX - m_radius;
	r.right = m_CenterX + m_radius;

	pDC->Ellipse(&r);
}
