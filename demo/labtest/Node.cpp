#include"Node.h"

Node::Node(Student &s)
{
	this->s=s;
	this->next=NULL;
}

Student Node::getdata()
{
	return s;
}

void Node::setdata(Student &s)
{
	this->s=s;
}

void Node::setnext(Node *next)
{
	this->next=next;
}

Node *Node::getnext()
{
	return next;
}

Node::Node()
{
	next=NULL;
}