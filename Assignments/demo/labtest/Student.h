#pragma once
#include<iostream.h>

class Student
{
	int id;
	char name[20];
	int age;
public:
	Student();
	Student(int,char*,int);
	friend ostream & operator<<(ostream &,Student &);
	void accept();
	void operator=(Student &);
};