#ifndef _CHARACTERINPUT_H_
#define _CHARACTERINPUT_H_

typedef struct LNode
{
	int Tag; // Tag==0,URegion storage op£¬Tag==1 storage num;
	union
	{
		char op;
		float num;
	} URegion;
	struct LNode *next;
} LNode;
typedef LNode *SList;
SList createSList(int n = 1);

class characterInput
{
public:
	characterInput();						  // default Constructor
	characterInput(const characterInput &p) : // copy Constructor
											  CalList(p.CalList), tailPointer(p.tailPointer){};

	~characterInput();

private:
	SList CalList;
	LNode *tailPointer;

public:
	// Input valid data from keybord , storage LNode list ,and return CalList
	LNode *Input();

	int quantity(); // return quantity of the elements of list;
};
#endif // !_CHARACTERINPUT_H_