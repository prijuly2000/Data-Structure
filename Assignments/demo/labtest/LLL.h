#include"Node.h"

class LLL
{
	Node *start;
public:
	LLL();
	friend ostream & operator<<(ostream &,LLL &);
	void InsertPos(Student &,int);
	void DeletePos(int);
	void Readfile();
	void Writefile();

};