#include<iostream.h>

class Emp
{
	int id;
	char name[20];
public:
	Emp();
	friend ostream & operator<<(ostream &,Emp &);
	friend istream & operator>>(istream &,Emp &);
	void operator=(Emp &);
};