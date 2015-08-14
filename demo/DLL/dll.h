#include"node.h"

class Dlink
{
	Node *start;

public:
	Dlink();
	~Dlink();
	void InsetBeg(int );
	void Display();
	void InsertEnd(int);
	void InsertPos(int ,int);
	void DeleteBeg();
	void DeleteEnd();
	void DeletePos(int);

};