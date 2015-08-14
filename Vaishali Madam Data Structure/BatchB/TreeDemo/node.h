#include<iostream>
using namespace std;
//////////////////////////////////
class Node
{
	int data;
	Node *left,*right;
public:
	Node(int);
	int GetData();
	void SetData(int);
	Node *GetLeft();
	void SetLeft(Node *);
	Node *GetRight();
	void SetRight(Node *);
};