#include"Node.h"


Node::Node(int data)
{
	this->data=data;
	this->next=NULL;
	this->prev=NULL;
}
int Node::getdata()
{
	return data;
}

Node *Node::getnext()
{
	return next;
}

void Node::setnext(Node * next)
{
	this->next=next;
}

Node *Node::getprev()
{
	return prev;
}

void Node::setprev(Node *prev)
{
	this->prev=prev;
}
