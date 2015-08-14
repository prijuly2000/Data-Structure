#include<iostream.h>

class Stack
{
	int top1,top2;
	int s[10];
public:
	Stack();
	bool push1(int );
	bool push2(int );

	bool pop1(int &);
	bool pop2(int &);
	void display1();
	void display2();
	bool IsEmpty1();
	bool IsEmpty2();
	bool IsFull();

};