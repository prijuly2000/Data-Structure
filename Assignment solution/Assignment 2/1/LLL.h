#include"Node.h"

class LLL
{
	Node *start;
public:
	LLL();
	void InsertBeg(int data);
	void InsertEnd();
	void display();
	void InsertEnd(int);
	void InsertPos(int,int);
	void DeleteBeg();
	void DeleteEnd();
	void DeletePos(int );
	~LLL();
	void reverse();
	void dis_reverse(Node *);
	Node *getstart();
	friend ostream & operator<<(ostream &,LLL &);
	void InsertSort(int);

};


