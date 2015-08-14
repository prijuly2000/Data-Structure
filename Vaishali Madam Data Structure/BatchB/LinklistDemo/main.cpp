#include"linklist.h"
///////////////////////////////////
void main()
{
	Linklist l;
	int data,iChoice=0,pos;
	while(iChoice!=10)
	{
		cout<<"\n\t\t1.Insert from beginning";
		cout<<"\n\t\t2.Insert from end";
		cout<<"\n\t\t3.Insert at position";
		cout<<"\n\t\t4.Delete from beginning";
		cout<<"\n\t\t5.Delete from end";
		cout<<"\n\t\t6.Delete from position";
		cout<<"\n\t\t9.Display";
		cout<<"\n\t\t10.Exit";
		cout<<"\nEnter your choice";
		cin>>iChoice;
		switch(iChoice)
		{
		case 1:
				cout<<"\nEnter data to insert";
				cin>>data;
				l.InsertBeg(data);
			break;
		case 2:
				cout<<"\nEnter data to insert";
				cin>>data;
				l.InsertEnd(data);
			break;
		case 3:
				cout<<"\nEnter data to insert and position";
				cin>>data>>pos;
				l.InsertPos(data,pos);
			break;
		case 4:
			l.DeleteBeg();
			break;
		case 5:
			l.DeleteEnd();
			break;
		case 6:
			cout<<"\nEnter position";
			cin>>pos;
			l.DeletePos(pos);
			break;
		case 9:
			l.Display(); 
			break;
		case 10:
			break;
		default:
			cout<<"\nInvalid choice";
		}
	}
}