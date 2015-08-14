#include"CDLL.h"

CDLL::CDLL()
{
	for(int i=0;i<5;i++)
	{
		this->data[i]=0;
		this->left[i]=NULL;
		this->right[i]=NULL;
	}
}

void CDLL::insert(int data,int pos)
{
	if()
}


void CDLL::display()
{
	for(int i=0;i<5;i++)
	{
		cout<<" "<<data[i];
	}
}
