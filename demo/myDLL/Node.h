#include<iostream.h>

class Node
{
	Node *prev;
	int data;
	Node *next;

public:
	Node(int);
	Node *getnext();
	void setnext(Node *);
	Node *getprev();
	void setprev(Node *);
	int getdata();
	

};