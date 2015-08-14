#include<iostream.h>

class Queue
{
	int f,r,s[10];
public:
	Queue();
	bool pushf(int );
	bool pushr(int );
	bool popf(int &);
	bool popr(int &);
	void display();
	bool IsEmpty();
	bool IsFull();
};