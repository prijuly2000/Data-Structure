#include"Node.h"

class CLL
{
	Node *last;

public:
	CLL();
	void insertpos(int,int);
	void deletepos(int);
	void display();
	~CLL();
};