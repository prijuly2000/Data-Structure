#include"binary search.h"

void main()
{
	int ch=0;
	binary b;
	int data;
	while(ch!=3)
	{
		cout<<"\n1.Accept";
		cout<<"\n2.binary search";
		cout<<"\n3.exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 2:
			data=b.binarysearch();
			if(data==-1)
				cout<<"no element found";
			else
				cout<<"\npos="<<data+1<<"\nelement:"<<b.s[data+1];
			break;
		case 1:
			b.accept();
			break;
		}
	}
}