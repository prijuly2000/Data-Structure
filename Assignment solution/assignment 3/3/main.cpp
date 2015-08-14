#include"CDLL.h"

void main()
{
	CDLL l;
	int pos,data,ch;

	while(ch!=5)
	{
		cout<<"\n\n----CDLL ops----";
		cout<<"\n1.display";
		cout<<"\n2.Insert";
		cout<<"\n3.Delete";
		cout<<"\n4.Insert order";
		cout<<"\n5.Exit";
		cout<<"\nEnter the choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			l.display();
			break;
		case 2:
			cout<<"\nEnter the data : ";
			cin>>data;
			cout<<"\nEnter the position : ";
			cin>>pos;
			l.InsertPos(data,pos);
			break;
		case 3:
			cout<<"\nEnter the position : ";
			cin>>pos;
			l.DeletePos(pos);
			break;


		}
	}
}