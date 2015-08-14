#include"Emp.h"

#include<string.h>

Emp::Emp()
{
	id=0;
	strcpy(name,"");
}

ostream & operator<<(ostream & o,Emp & e)
{
	o<<"\n\n--------------\n";
	o<<"\nEmp id:"<<e.id;
	o<<"\nname  :"<<e.name;
	o<<"\n\n--------------\n";
	return o;
}

istream & operator>>(istream & in,Emp & e)
{
	cout<<"\nEnter the id:";
	in>>e.id;
	cout<<"\nEnter the name:";
	in>>e.name;
	return in;
}

void Emp::operator=(Emp &e)
{
	this->id=e.id;
	strcpy(this->name,e.name);
}