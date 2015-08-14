#include"Node.h"

class LLL
{
	Node * start;
	void DeleteEnd();
public:
	LLL();
	void InsertPos(int,int);
	friend ostream &operator<<(ostream &,LLL&);
	void writefile();
	void readfile();
	
};