#include"Node.h"

Node::Node(Emp &e)
{
	this->e=e;
	this->next=NULL;
}

void Node::setnext(Node *next)
{
	this->next=next;
}

Emp & Node::getdata()
{
	return this->e;
}

void Node::setdata(Emp & e)
{
	this->e=e;
}

Node *Node::getnext()
{
	return next;
}