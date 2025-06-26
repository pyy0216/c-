#include<iostream>
class point
{
private:
	double x, y, z;
public:
	point(double x = 0, double y = 0, double z = 0) { this->x = x; this->y = y; this->z = z; }
	friend point operator+(point&, point&);
	friend point operator-(point&, point&);
	point operator++();
	point operator++(int);
	point operator--();
	point operator--(int);
	point& operator=(point  p)
	{
		if(this==&p)
		return *this;
		x = p.x;
		y = p.y;
		z = p.z;
		return *this;
	}
	double& operator[](int k)
	{
		if (k == 0)
			return x;
		else if (k == 1)
			return y;
		else if (k == 2)
			return z;
		else
		{
			std::cout << "ÏÂ±ê³ö´í" << k << std::endl;
			exit(2);
		}
			 
	}
	void display()
	{
		std::cout << "(" << x << "," << y << "," << z << ")";
	}
};

