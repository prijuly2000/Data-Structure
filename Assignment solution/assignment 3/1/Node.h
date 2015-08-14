#include<iostream.h>

class Node
{
	Node *next;
	int data;
public:
	Node(int);
	int getdata();
	void setdata(int);
	Node *getnext();
	void setnext(Node *);
};