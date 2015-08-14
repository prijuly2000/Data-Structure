#include<iostream.h>

class Node
{
	int data;
	Node *next;
	Node *preve;

public:
	Node(int);
	int GetData();
	void SetData(int);
	Node * GetNext();
	void SetNext(Node *);
	Node * GetPreve();
	void SetPreve(Node *);
	
};