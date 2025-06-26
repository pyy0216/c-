#include"head.h"
#include "stringlist.h"
#include"encryption.h"
int main()
{
	int n;
	cout << "请输入需要需要异或加密的字符串个数" << endl;
	cin >> n;
	string key;
	cout << "请输入密钥" << endl;
	cin >> key;
	stringlist list, list2, list3;
	cout << "请输入需要加密的" << n << "个字符串" << endl;
	int i = 0;
	char** c = new char* [10];
	for (int ii = 0; ii < 10; ii++)
	{
		c[ii] = new char[1000];
	}
	for (; i < n; i++)
	{
		cin >> c[i];
		list.stringin(c[i]);
	}
	for (int i = n; i >= 1; i--)
	{
		encryption first(i, list,list);

		list2.stringin(first.encry(key));
		size_t t = strlen((list.seek(i))->plain);
		for (int x = 0; x < t; x++)
		{
			cout << "0x" << setw(4) << setfill('0') << hex << static_cast<int>(static_cast<unsigned char>((first.encry(key))[x])) << endl;//将密文的每个字符以16进制输出
		}
	}
	cout << "加密完成" << endl;
	for (int i = n; i >= 1; i--)
	{
		encryption first2(i, list2,list);
		list3.stringin(first2.encry(key));
		cout << first2.encry(key) << endl;

	}
	cout << "解密完成" << endl;
}