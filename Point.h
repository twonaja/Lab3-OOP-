#pragma once

class Point 
{
public:
	Point (int x = 0, int y = 0);
	const Point& operator+=(const Point& rObj);
	const Point& operator+(const Point& rObj);
	const Point& operator-(const Point& rObj);

	Point operator+=(const int& tmp);
	Point operator+(const int& tmp);
	Point operator-(const int& tmp);


	friend Point operator+(int tmp, const Point& rObj);
	friend const Point& operator+(const Point& rObj);
	friend const Point& operator-(const Point& rObj);
private:
	int m_x;
	int m_y;
};
