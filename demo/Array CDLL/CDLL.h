#include<iostream.h>

class CDLL
{
	int *left[5];
	int *right[5];
	int data[5];
public:
	CDLL();
	void insert(int data,int pos);
	void display();
};