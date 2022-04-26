#ifndef _INPUTEXP_H
#define _INPUTEXP_H

// README:Node class to store expressions
class OperationObject
{
public:
	OperationObject();
	~OperationObject();
	bool store(char ch); //?????????

private:
	union Object
	{
		float num;
		char op;
	};
};

class ArrayOfExp
{
};

#endif // !_INPUTEXP_H