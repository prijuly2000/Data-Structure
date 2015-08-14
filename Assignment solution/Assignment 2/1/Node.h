#include<iostream.h>

class Node
{
	int data;
	Node *next;

public:
	Node(int);
	Node * getnext();
	int getdata();
	void setnext(Node*);
	
};