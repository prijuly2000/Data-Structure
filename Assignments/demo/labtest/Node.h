#include"Student.h"

class Node
{
	Student s;
	Node *next;
public:
	Node(Student &s);
	Student getdata();
	void setnext(Node *);
	Node *getnext();
	Node();
	void setdata(Student &s);

};