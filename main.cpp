//#include "characterInput.h"
#include "Calculator.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int flag = 1;
	while (flag)
	{
		cout << "�������ԡ� = ����β�ı��ʽ\n\n";
		Calculator test;
		float result = test.result();
		cout <<endl<< "Resut=" << result <<endl;
		cin.get();
		cout << endl<<endl<<endl<<"���ո�����������س����������� �� ����������\n";
			char temp = cin.get();
			switch (temp)
			{
			case ' ':
				system("cls");
				cin.get();
				break;
			case '!':
				flag = 0;
				break;
			case '\n':
				cout << endl << endl;
				break;
			default:
				cin.get();
				cout << endl << endl;
				break;
			}
	}
	return 0;
}