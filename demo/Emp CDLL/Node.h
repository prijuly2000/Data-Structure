#include"Emp.h"

class Node
{
	Node *next,*prev;
	Emp e;

public:
	Node(Emp &);
	void setnext(Node *);
	void setprev(Node *);
	Emp getdata();
	Node *getnext();
	Node *getprev();

};