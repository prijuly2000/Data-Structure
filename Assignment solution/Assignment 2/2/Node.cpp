#include"Node.h"

Node::Node(Emp &employee)
{
	this->employee=employee;//overload operator=
	this->next=NULL;
}
 
Node *Node::getnext()
{
	return next;
}

Emp Node::getdata()
{
	return employee;
}

void Node::setnext(Node*next)
{
	this->next=next;
}

void Node::display()
{
	employee.display();
}

ostream & operator<<(ostream & o,Node & n )
{
	o<<n.getdata();
	return o;
}