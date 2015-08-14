#include"Node.h"

class CDLL
{
	Node *last;
public:
	CDLL();
	void InsertPos(int,int);
	void display();
	void DeletePos(int);
};