#include"Node.h"

class DLL
{
	Node *start;
public:
	DLL();
	void InsertPos(int,int);
	void DeletePos(int);
	friend ostream & operator<<(ostream &,DLL&);
	void dis_rev();
	~DLL();
	void InsertSorted(int);
};