#include"Linklist.h"

void main()
{
	Linklist l;
	int ch,data,pos;
	while(ch!=10)
	{
		cout<<"\n\n----linklist----\n";
		cout<<"\n1.display";
		cout<<"\n2.insert at begining";
		cout<<"\n3.insert at End";
		cout<<"\n4.insert at position";
		cout<<"\n5.Delete at begining";
		cout<<"\n6.Delete at End";
		cout<<"\n7.Delete at position";
		cout<<"\n10.Exit";
		cout<<"\nEnter the choice : ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			l.display();
			break;
		case 2:
			cout<<"\nEnter the data :";
			cin>>data;
			l.InsertBeg(data);
			break;
		case 3:
			cout<<"\nEnter the data :";
			cin>>data;
			l.InsertEnd(data);
			break;
		case 4:
			cout<<"\nEnter the data & position :";
			cin>>data;
			cin>>pos;
			l.InsertPos(data,pos);
			break;
		case 5:
			l.DeleteBeg();
			break;
		case 6:
			l.DeleteEnd();
			break;
		case 7:
			cout<<"\nEnter the position :";
			cin>>pos;
			l.DeletePos(pos);
			break;
		}
	}


}