#include<iostream.h>

class Stack
{
	int top;
	int s[10];
public:
	Stack();
	bool push(int );
	
	bool pop(int &);
	void display();
	bool IsEmpty();
	bool IsFull();

};