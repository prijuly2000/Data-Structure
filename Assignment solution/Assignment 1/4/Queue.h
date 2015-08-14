#include<iostream.h>

class Queue
{
	int f,r,s[10];
	static int count;
public:
	Queue();
	bool push(int );
	bool pop(int &);
	void display();
	bool IsEmpty();
	bool IsFull();
	friend ostream & operator<<(ostream & o,Queue &);
	bool operator==(Queue &);
	void writefile();
	void readfile();
};