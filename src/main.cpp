//#include "characterInput.h"
#include "Calculator.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	int flag = 1;
	while (flag)
	{
		cout << "Please enter an expression ending with \"=\" :\n\n";
		Calculator test;
		float result = test.result();
		cout << endl
			 << "Resut=" << result << endl;
		cin.get();
		cout << endl
			 << endl
			 << endl
			 << "Press the space key to clear the screen;" << endl
			 << "press the \"!\" to terminate the program;" << endl
			 << "press any other keys to continue;" << endl;
		char temp;
		cin.get(temp);
		switch (temp)
		{
		case ' ':
		{
			system("cls");
			cin.get();
			break;
		}
		case '!':
		{
			flag = 0;
			break;
		}
		case '\n':
		{
			cout << endl
				 << endl;
			break;
		}
		default:
		{
			cin.get();
			cout << endl
				 << endl;
			break;
		}
		}
	}
	return 0;
}