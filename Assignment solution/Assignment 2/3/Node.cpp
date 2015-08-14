#include"Node.h"

Node::Node(int data)
{
	this->data=data;
	this->next=NULL;
}

int Node::getdata()
{
	return data;
}

void Node::setdata(int data)
{
	this->data=data;
}

Node *Node::getnext()
{
	return next;
}

void Node::setnext(Node *next)
{
	this->next=next;
}
