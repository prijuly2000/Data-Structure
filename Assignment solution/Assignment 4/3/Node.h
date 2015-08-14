#include<iostream.h>

class Node
{
	Node *left;
	int data;
	Node *right;
public:
	Node(int);
	Node *getright(),*getleft();
	void setleft(Node * ),setright(Node *);
	int getdata();
	void setdata(int);
	
};