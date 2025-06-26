#pragma once
#include "head.h"
class stringlist
{
	typedef struct node
	{
		char*plain=new char[1000];
		node* next;

	}node;
public:
	stringlist()
	{
		head = new node;
		head->next = NULL;
	}
	void stringin(char* a)
	{
		head->plain=a;
		node* newhead = new node;
		newhead->next = head;
		head = newhead;
	}
	node* seek(int n)
	{
		node* sese = head->next;
		for (int i = 1; i < n; i++)
		{
			sese = sese->next;
		}
		return sese;
	}
	friend class encryption;
protected:
	node* head;
};