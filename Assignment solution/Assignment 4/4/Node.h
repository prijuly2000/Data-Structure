#include<iostream.h>

class Node
{
	Node *next;
	int data,status;
	Node *link;
public:
	Node(int);
	Node *getnext();
	void setnext(Node *);
	Node *getlink();
	void setlink(Node *);
	int getdata();
	void setdata(int);
	int getstatus();
	void setstatus(int );


};