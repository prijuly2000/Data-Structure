#include"node.h"
/////////////////////////////
Node::Node(int data)
{
	this->data=data;
	this->left=NULL;
	this->right=NULL;
}
/////////////////////////////
int Node::GetData()
{
	return data;
}
/////////////////////////////
void Node::SetData(int data)
{
	this->data=data;
}
/////////////////////////////
Node *Node::GetLeft()
{
	return left;
}
/////////////////////////////
void Node::SetLeft(Node *nt)
{
	left=nt;
}
/////////////////////////////
void Node::SetRight(Node *nt)
{
	right=nt;
}
/////////////////////////////////
Node *Node::GetRight()
{
	return right;
}
/////////////////////////////
