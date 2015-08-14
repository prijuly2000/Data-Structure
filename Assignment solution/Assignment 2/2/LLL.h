#include"Node.h"

class LLL
{
	Node *start;
public:
	LLL();
	void display();
	void InsertPos(Emp &,int );
	void DeletePos(int );
	~LLL();
	friend ostream & operator<<(ostream &,LLL &);

};