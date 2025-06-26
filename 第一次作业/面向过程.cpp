#include<iostream>
using namespace std;
struct Person {
	int height, weight, bust, waistline, hipline;
};
int main()
{
	Person num[1000];
	int number;
	cin >> number;
	int i = 0;
	for (; i < 1000 && i < number; i++)
	{
		cin >> num[i].height >> num[i].weight >> num[i].bust >> num[i].waistline >> num[i].hipline;
	}
	int sum_height = 0, sum_weight = 0, sum_bust = 0, sum_waistline = 0, sum_hipline = 0;
	for (i = 0; i < number && i < 1000; i++)
	{
		sum_height+= num[i].height;
		sum_weight += num[i].weight;
		sum_bust += num[i].bust;
		sum_waistline += num[i].waistline;
		sum_hipline += num[i].hipline;
	}
	cout << "身高的平均值是" << sum_height * 1.0 / number << endl;
	cout<<"体重的平均值是" << sum_weight * 1.0 / number << endl;
	cout << "胸围的平均值是" << sum_bust * 1.0 / number << endl;
	cout << "腰围的平均值是"<<sum_waistline * 1.0 / number << endl;
	cout<<"臀围的平均值是"<< sum_hipline * 1.0 / number << endl;
	return 0;
}