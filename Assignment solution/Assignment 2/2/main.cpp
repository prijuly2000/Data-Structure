
#include"LLL.h"

void main()
{
	LLL l;
	Emp e;
	int ch,pos;
	while(ch!=5)
	{
		cout<<"\n\n----linklist for Employee----\n";
		cout<<"\n1.display";
		cout<<"\n2.insert ";
		cout<<"\n3.delete ";
		cout<<"\n4.Display using operator<<";
		cout<<"\n5.exit";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		cout<<"\n\n";
		switch(ch)
		{
		case 1:
			l.display();
			break;
		case 2:
			e.accept();
			cout<<"Enter the position: ";
			cin>>pos;
			l.InsertPos(e,pos);
			break;
		case 3:
			cout<<"\nEnter the position : ";
			cin>>pos;
			l.DeletePos(pos);
			break;
		case 4:
			cout<<l;
			break;
		}
	}
		
}

