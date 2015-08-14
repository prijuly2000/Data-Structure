#include"node.h"
///////////////////////////////////
class Linklist
{
	Node *start;
public:
	Linklist();
	void InsertBeg(int);
	void InsertEnd(int);
	void InsertPos(int,int);
	void DeleteBeg();
	void DeleteEnd();
	void DeletePos(int);
	void Display();
};