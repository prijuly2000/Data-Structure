#include<iostream>
using namespace std;
//////////////////////////////////
class Node
{
	int data;
	Node *next,*link;
public:
	Node(int);
	int GetData();
	void SetData(int);
	Node *GetNext();
	void SetNext(Node *);
	Node *GetLink();
	void SetLink(Node *);
};