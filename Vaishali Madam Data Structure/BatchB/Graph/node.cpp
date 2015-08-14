#include"node.h"
/////////////////////////////
Node::Node(int data)
{
	this->data=data;
	this->next=NULL;
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
Node *Node::GetNext()
{
	return next;
}
/////////////////////////////
void Node::SetNext(Node *nt)
{
	next=nt;
}
/////////////////////////////
Node *Node::GetLink()
{
	return link;
}
/////////////////////////////
void Node::SetLink(Node *link)
{
	this->link=link;
}