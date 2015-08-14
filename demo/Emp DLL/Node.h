#include"Emp.h"

class Node
{
	Emp e;
	Node *next;
	Node *prev;

public:
	Node(Emp &);
	Emp getdata();
	Node *getnext();
	Node *getprev();
	void setnext(Node *);
	void setprev(Node *);

};