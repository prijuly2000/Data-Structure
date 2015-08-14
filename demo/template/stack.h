#include<iostream.h>

template<class T>
class Stack
{
	int top;
	T s[10];
public:
	Stack();
	bool push(T  );
	bool pop(T &);
	void display();
	bool IsEmpty();
	bool IsFull();

};