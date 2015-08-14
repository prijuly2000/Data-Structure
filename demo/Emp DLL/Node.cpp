#include"Node.h"

Node::Node(Emp & e)
{
	this->e=e;
	this->next=NULL;
	this->prev=NULL;
}

Emp Node::getdata()
{
	return e;
}
Node *Node::getnext()
{
	return next;
}

Node *Node::getprev()
{
	return prev;
}
void Node::setnext(Node *next)
{
	this->next=next;
}

void Node::setprev(Node *prev)
{
	this->prev=prev;
}
