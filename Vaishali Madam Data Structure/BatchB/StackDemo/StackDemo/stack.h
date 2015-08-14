#define MAX 10
#include<iostream>
using namespace std;
////////////////////////////////////
class Stack
{
	int top;
	int s[MAX];
public:
	Stack();
	bool IsEmpty();
	bool IsFull();
	bool Push(int);
	bool Pop(int &);
	bool Peek(int &);
	void Display();
	friend ostream &operator<<(ostream &,Stack &);
};