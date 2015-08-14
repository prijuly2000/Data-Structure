#include<iostream.h>

class Node
{
	Node *left;
	int data;
	Node *right;
public:
	Node(int);
	Node *getleft();
	void setleft(Node *);
	Node *getright();
	void setright(Node *);
	int getdata();
	void setdata(int);


};