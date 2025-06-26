#include "point.h"
point operator+(point&p1, point&p2)
{
	return point(p1.x + p2.x, p1.y + p2.y, p1.z + p2.z);
}
point operator-(point&p1, point&p2)
{
	return point(p1.x - p2.x, p1.y - p2.y, p1.z - p2.z);
}
point point::operator++()
{
	return point(++x,++y,++z);
}
point point::operator++(int)
{
	point p = *this;
	x++;
	y++;
	z++;
	return p;
}
point point::operator--()
{
	return point(--x, --y, --z);
}
point point::operator--(int)
{
	point p = *this;
	x--;
	y--;
	z--;
	return p;
}