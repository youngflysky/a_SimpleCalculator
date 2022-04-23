#ifndef _INPUTEXP_H
#define _INPUTEXP_H

class OperationObject
{
public:
	OperationObject(char getNum);
	~OperationObject();

private:
	union Object
	{
		float num;
		char op;
	};

	static int lengthOfExp;
};

class ArrayOfExp
{
};

#endif // !_INPUTEXP_H