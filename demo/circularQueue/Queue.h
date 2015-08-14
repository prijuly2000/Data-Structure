#include<iostream.h>

class Queue
{
	int f,r,s[10];
public:
	Queue();
	bool pushr(int );
	bool popf(int &);
	bool pushf(int );
	bool popr(int &);
	void display();
	bool IsEmpty();
	bool IsFull();
};