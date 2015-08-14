#include"Node.h"

Node::Node(int data)
{
	this->left=NULL;
	this->data=data;
	this->right=NULL;
}

Node *Node::getleft()
{
	return left;
}

void Node::setleft(Node *left)
{
	this->left=left;
}

Node *Node::getright()
{
	return right;
}

void Node::setright(Node *right)
{
	this->right=right;
}

int Node::getdata()
{
	return data;
}

void Node::setdata(int data)
{
	this->data= data;
}