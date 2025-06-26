#include"point.h"
using namespace std;
int main()
{
	double x1, x2, y1, y2, z1, z2;
	cout << "请分别输入两个点的坐标" << endl;
	cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
	point p1(x1, y1, z1), p2(x2, y2, z2);
	point p3;
	p3 = p1 + p2;
	cout << "两个点的坐标和为";
	p3.display();
	cout << endl;
	p3 = p1 - p2;
	cout << "两个点的坐标差为";
	p3.display();
	cout << endl;
	cout << "p1为输入的第一个点"<<endl;
	cout << "p3=++p1,p3的坐标为";
	p3 = ++p1;
	p1--;
	p3.display();
	cout << endl;
	cout << "p3=p1++,p3的坐标为";
	p3 = p1++;
	p1--;
	p3.display();
	cout << endl;
	cout << "p1为输入的第一个点"<<endl;
	cout << "p3=--p1,p3的坐标为";
	p3 = --p1;
	p1++;
	p3.display();
	cout << endl;
	cout << "p3=p1--,p3的坐标为";
	p3 = p1--;
	p1++;
	p3.display();
	cout << endl;
	cout << "p1[0]=" << p1[0] << "\np1[1]=" << p1[1] << "\np1[2]=" << p1[2] << endl;
	return 0;
}
