#include"Node.h"

Node *Node::getright()
{
	return right;
}

Node * Node::getleft()
{
	return left;
}

void Node::setleft(Node *left)
{
	this->left=left;
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
	this->data=data;
}

Node::Node(int data)
{
	this->left=NULL;
	this->right=NULL;
	this->data=data;
}