#pragma once
#include<iostream.h>

class Emp
{
	int id;
	char name[20];
public:
	Emp();
	Emp(int ,char *);
	friend ostream & operator<<(ostream &,Emp &);
	void operator=(Emp &);
	void display();
	void accept();
	

};