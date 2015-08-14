#include"node.h"

Node::Node(int data)
{
	this->data=data;
	this->next=NULL;
	this->preve=NULL;
}
int Node::GetData()
{
	return data;
}
void Node::SetData(int data)
{
	this->data=data;
}
Node * Node::GetNext()
{
	return next;
}
void Node::SetNext(Node *next)
{
	this->next=next;
}

Node * Node::GetPreve()
{
	return preve;
}
void Node::SetPreve(Node *preve)
{
	this->preve=preve;
}