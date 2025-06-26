
#include"head.h"
#include"stringlist.h"
class encryption
{
private:
	char* word=new char[1000];
	int t;
public:
	encryption(int n, stringlist& list, stringlist& listt)
	{
		stringlist::node* apple = list.seek(n);
		word= apple->plain;
		t = strlen((listt.seek(n))->plain);
	}
	char* encry(string key)
	{
		char* result = new char[1000];
		int k;
		for (k = 0; k < t; k++)
		{
			result[k] = word[k] ^ key[k % key.length()];// 使用密钥循环对每个字符进行异或加密
		}
		result[k] = '\0';
		return result;
	}
};