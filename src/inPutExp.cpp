#include "inPutExp.h"
#include <cmath>
#include <iostream>
using namespace std;

OperationObject::OperationObject(){};
OperationObject::~OperationObject(){};

bool OperationObject::store(char ch)
{
    if (ch >= '0' && <= '9')
    {
        Object.num = ch - '0';
        return true;
    }
    else
    {
        switch (ch)
        {
        case '+':
        case '-':
        case '*':
        case '/':
        case '(':
        case ')':
        {
            Object.op = ch;
            return true;
            break;
        }
        default:
        {
            cout << "Input Error! Ignored!" << endl;
            return false;
            break;
        }
        }
    }
}