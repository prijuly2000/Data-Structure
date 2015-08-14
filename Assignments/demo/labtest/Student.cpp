#include"Student.h"
#include<string.h>

Student::Student()
{
	id=age=0;
	strcpy(name,"");
}

Student::Student(int i,char*nm,int a)
{
	id=i;
	strcpy(name,nm);
	age=a;
}

ostream & operator<<(ostream & o,Student & s)
{
	o<<"\n-----------";
	o<<"\nId  :"<<s.id;
	o<<"\nName:"<<s.name;
	o<<"\nAge :"<<s.age;
	o<<"\n----------\n";
	return o;
}

void Student::accept()
{
	cout<<"\n\nEnter the id : ";
	cin>>id;
	cout<<"\nEnter the name : ";
	cin>>name;
	cout<<"\nEnter the age  : ";
	cin>>age;
}

void Student::operator=(Student &s)
{
	this->id=s.id;
	this->age=s.age;
	strcpy(this->name,s.name);	
}