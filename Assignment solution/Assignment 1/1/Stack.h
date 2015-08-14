#include<iostream.h>
#define MAX 10
class Stack
{
	int top,s[MAX];
	static int count;
public:
	Stack();
	
	bool IsEmpty();
	bool IsFull();
	void display();
	bool push(int);
	bool pop(int &x);
	friend ostream & operator<<(ostream &,Stack &);
	bool operator==(Stack &);
	void writefile();
	void readfile();

};