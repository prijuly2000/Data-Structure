#include<iostream.h>

class Queue
{
	int f,r,s[10];
public:
	Queue();
	bool push(int );
	bool pop(int &);
	void display();
	bool IsEmpty();
	bool IsFull();
};