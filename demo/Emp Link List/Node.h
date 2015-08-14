#include"Emp.h"

class Node
{
	Emp e;
	Node * next;
public:
	Node(Emp &e);
	void setnext(Node *next);
	Emp & getdata();
	void setdata(Emp & e);
	Node *getnext();


};