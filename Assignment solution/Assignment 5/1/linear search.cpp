#include"linear search.h"

linear::linear()
{
	for(int i=0;i<10;i++)
		s[i]=0;
}

void linear::search(int &data)
{

	for(int i=0;i<10;i++)
	{
		if(s[i]==data)
		{
			data=i;
			break;
		}
	}
}

int linear::getdata(int index)
{
	return s[index];
}

void linear::accept()
{
	for(int i=0;i<10;i++)
	{
		cin>>s[i];
	}
	

}