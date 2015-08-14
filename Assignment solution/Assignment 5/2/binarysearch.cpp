#include"binary search.h"

int binary::binarysearch()
{
	int data,e=10,b=0;
	cout<<"\nEnter the data:";
	cin>>data;
	int mid;
	while(b<=e)
	{
		mid=(b+e)/2;
		if(s[mid]==data)
		{
			return mid;
		}

		if(data<s[mid])
			e=mid-1;		
		else
			b=mid+1;
	}
	
		return -1;

}

binary::binary()
{
	for(int i=0;i<10;i++)
	{
		s[i]=0;
	}
}


void binary::accept()
{
	for(int i=0;i<10;i++)
		cin>>s[i];
}