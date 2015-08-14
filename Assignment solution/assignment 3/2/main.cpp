#include"DLL.h"

void main()
{
	DLL l;
	int data,pos,ch=0;

	while(ch!=6)
	{
		cout<<"\n\n---DLL ops---\n";
		cout<<"\n1.display";
		cout<<"\n2.Insert";
		cout<<"\n3.Delete";
		cout<<"\n4.Insert sort";
		cout<<"\n5.Display Reverse";
		cout<<"\n6.Exit";
		cout<<"Enter the choice";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<l;
			break;
		case 2:
			cout<<"\n\nEnter the data";
			cin>>data;
			cout<<"\nEnter the position";
			cin>>pos;
			l.InsertPos(data,pos);
			break;
		case 3:
			cout<<"\nEnter the position";
			cin>>pos;
			l.DeletePos(pos);
			break;
		case 4:
			cout<<"\nEnter the data\n";
			cin>>data;
			l.InsertSorted(data);
			break;
		case 5:
			l.dis_rev();
			break;

		}

	}
	
}