#include"Node.h"

Node::Node(int data)
{
	this->next=NULL;
	this->data=data;
	this->prev=NULL;
}

void Node::setprev(Node *prev)
{
	this->prev=prev;
}

Node *Node::getprev()
{
	return prev;
}

void Node::setnext(Node *next)
{
	this->next=next;
}

Node *Node::getnext()
{
	return next;
}

void Node::setdata(int data)
{
	this->data=data;
}

int Node::getdata()
{
	return data;
}
