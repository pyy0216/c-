#include<iostream>
using namespace std;
class average
{
private:
		
	int number; 
	struct Person {
		int height, weight, bust, waistline, hipline;
	};

		Person num[1000];
		int sum_height = 0, sum_weight = 0, sum_bust = 0, sum_waistline = 0, sum_hipline = 0;
public:
	void input_number()
	{
		cin >> number;
	}
	void input_person()
	{
	int i = 0;
		for (; i < 1000 && i < number; i++)
		{
			cin >> num[i].height >> num[i].weight >> num[i].bust >> num[i].waistline >> num[i].hipline;
		}
	}
	void gotosum()
	{
		int i = 0;
		for (i = 0; i < number && i < 1000; i++)
		{
			sum_height += num[i].height;
			sum_weight += num[i].weight;
			sum_bust += num[i].bust;
			sum_waistline += num[i].waistline;
			sum_hipline += num[i].hipline;
		}
	}
	void output_average()
	{
		cout << "��ߵ�ƽ��ֵ��" << sum_height * 1.0 / number << endl;
		cout << "���ص�ƽ��ֵ��" << sum_weight * 1.0 / number << endl;
		cout << "��Χ��ƽ��ֵ��" << sum_bust * 1.0 / number << endl;
		cout << "��Χ��ƽ��ֵ��" << sum_waistline * 1.0 / number << endl;
		cout << "��Χ��ƽ��ֵ��" << sum_hipline * 1.0 / number << endl;
	}
};
int main()
{
	average averagep;
	cout << "����������" << endl;
	averagep.input_number();
	cout << "������ÿ���˵���ά" << endl;
	averagep.input_person();
	averagep.gotosum();
	averagep.output_average();
	return 0;
}