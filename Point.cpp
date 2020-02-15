#include "Point.h"

Point::Point(int x, int y)
{
	this->m_x = x;
	this->m_y = y;
}

const Point& Point::operator+=(const Point& rObj)
{
	if (this != &rObj)
	{
		this->m_x += rObj.m_x;
		this->m_y += rObj.m_y;
		return *this;
	}// TODO: вставьте здесь оператор return
	return *this;
}

Point Point::operator+=(const int& tmp)
{
	return Point(this->m_x + tmp, this->m_y);
}

const Point& Point::operator+(const Point& rObj)
{
	if (this != &rObj)
	{
		this->m_x += rObj.m_x;
		this->m_y += rObj.m_y;
		return *this;
	}// TODO: вставьте здесь оператор return
	return *this;
}

const Point& Point::operator-(const Point& rObj)
{
	if (this != &rObj)
	{
		this->m_x -= rObj.m_x;
		this->m_y -= rObj.m_y;
		return *this;
	}
	return *this;
	// TODO: вставьте здесь оператор return
}

Point Point::operator+(const int& tmp)
{
	return Point(this->m_x + tmp, this->m_y);
}

Point Point::operator-(const int& tmp)
{
	return Point(this->m_x - tmp, this->m_y - tmp);
}

Point operator+(int tmp, const Point& rObj)
{
	return Point(tmp + rObj.m_x, tmp + rObj.m_y);
}

const Point& operator+(const Point& rObj)
{
	return rObj;
}

const Point& operator-(const Point& rObj)
{
	return Point( -rObj.m_x, -rObj.m_y);
}
