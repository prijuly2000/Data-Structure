#define MAX 10
#include<iostream>
using namespace std;
////////////////////////////////////
class Queue
{
	int front,rear;
	int q[MAX];
public:
	Queue();
	bool IsEmpty();
	bool IsFull();
	bool Push(int);
	bool Pop(int &);	
	void Display();
	friend ostream &operator<<(ostream &,Queue &);
};