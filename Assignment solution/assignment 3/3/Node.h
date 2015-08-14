#include<iostream.h>

class Node
{
	int data;
	Node *prev;
	Node *next;
public:
	Node(int);
	int getdata();
	Node *getnext();
	void setnext(Node *);
	Node *getprev();
	void setprev(Node *);

};