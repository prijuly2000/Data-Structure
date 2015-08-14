#include<iostream.h>

class Node
{
	int data;
	Node *next;
public:
	Node(int);
	int getdata();
	void setdata(int);
	Node *getnext();
	void setnext(Node *);
	
};