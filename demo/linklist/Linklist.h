#include"Node.h"

class Linklist
{
	Node *start;
public:
	Linklist();
	void InsertBeg(int );
	void display();
	void InsertEnd(int);
	void InsertPos(int,int);
	void DeleteBeg();
	void DeleteEnd();
	void DeletePos(int );
	~Linklist();
	
};