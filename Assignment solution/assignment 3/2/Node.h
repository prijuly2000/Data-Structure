
#include<iostream.h>

class Node
{
	Node *next,*prev;
	int data;
public:
	Node(int);
	void setprev(Node *);
	Node *getprev();
	void setnext(Node *);
	Node *getnext();
	void setdata(int);
	int getdata();
	
};