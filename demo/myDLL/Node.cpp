#include"Node.h"

Node::Node(int data)
{
	this->prev=NULL;
	this->data=data;
	this->next=NULL;
}

Node *Node::getnext()
{
	return next;
}

void Node::setnext(Node *next)
{
	this->next=next;
}

void Node::setprev(Node *prev)
{
	this->prev=prev;
}

Node *Node::getprev()
{
	return prev;
}

int Node::getdata()
{
	return this->data;
}


