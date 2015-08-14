#include<iostream.h>

class Node
{
	Node *next;
	int data;
	Node *link;
public:
	Node(int);
	Node *getnext();
	void setnext(Node *);
	Node *getlink();
	void setlink(Node *);
	int getdata();
	void setdata(int);


};