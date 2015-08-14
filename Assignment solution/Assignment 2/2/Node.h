#include"Emp.h"

class Node
{
	Emp employee;
	Node *next;

public:
	Node(Emp &);
	Node * getnext();
	Emp getdata();
	void setnext(Node*);
	void display();
	friend ostream & operator<<(ostream & ,Node & );
	
};