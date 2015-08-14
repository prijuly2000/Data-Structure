#include"Node.h"

Node::Node(int data)
{
	this->next=NULL;
	this->data=data;
	this->link=NULL;
}

Node *Node::getnext()
{
	return next;
}

void Node::setnext(Node *next)
{
	this->next=next;
}

Node *Node::getlink()
{
	return link;
}

void Node::setlink(Node *link)
{
	this->link=link;
}

int Node::getdata()
{
	return data;
}

void Node::setdata(int data)
{
	this->data= data;
}