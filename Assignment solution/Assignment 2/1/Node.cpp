#include"Node.h"

Node::Node(int data)
{
	this->data=data;
	this->next=NULL;
}
 
Node *Node::getnext()
{
	return next;
}

int Node::getdata()
{
	return data;
}

void Node::setnext(Node*next)
{
	this->next=next;
}