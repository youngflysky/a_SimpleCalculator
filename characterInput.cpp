#include "characterInput.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

SList createSList(int n)
{
	LNode* s;
	s = (LNode*)malloc(n * sizeof(LNode));
	s->next = NULL;
	return s;
}

characterInput::characterInput()
{
	CalList = (LNode*)malloc(sizeof(LNode));
	tailPointer = CalList;
}
characterInput::~characterInput() 
{
};

LNode* characterInput::Input()
{
	 char ch;
	do
	{
		 ch=cin.get();
		if (ch >= '0' && ch <= '9')
		{
			float tempNum = ch - '0';
			do
			{
				ch = cin.get();
				if (ch >= '0' && ch <= '9')
				{
					tempNum = tempNum * 10 + (ch - '0');
				}
				else
				{
					break;
				}
			} while (1);
			LNode* s;
			s = createSList();
			s->Tag = 1;
			s->URegion.num = tempNum;
			tailPointer->next = s;
			tailPointer = s;
		}
		switch (ch)
		{
			case '+':
			case '-':
			case '*':
			case '/':
			case '(':
			case ')':
				LNode * s;
				s = createSList();
				s->Tag = 0;
				s->URegion.op=ch;
				tailPointer->next = s;
				tailPointer = s;
				break;
			case '=':
				return CalList;
			default:
				cout << "Input Error!";
				return NULL;
		}
	} while (1);
}

int characterInput::quantity()
{
	int i = 0;
	LNode* q = CalList->next;
	while (q)
	{
		++i;
		q = q->next;
	}
	return i;
}