#include"Emp.h"
#include<string.h>

Emp::Emp(int i ,char *nm)
{
	id=i;
	strcpy(name,nm);
}

ostream & operator<<(ostream & o,Emp & e)
{
	o<<"\nId  :"<<e.id;
	o<<"\nName:"<<e.name;
	return o;
}

void Emp::operator =(Emp & e)
{
	this->id=e.id;
	strcpy(this->name,e.name);
}

Emp::Emp()
{
	this->id=0;
	strcpy(name,"");
}

void Emp::display()
{
	cout<<"\nId  : "<<id;
	cout<<"\nName:"<<name;
	
}

void Emp::accept()
{
	cout<<"Enter the id";
	cin>>id;
	cout<<"Enter Name";
	cin>>name;
}
