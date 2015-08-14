#include"CDLL.h"

void main()
{
	Emp e;
	int ch,pos;

	CDLL l;
	while(ch!=4)
	{
		cout<<"\n\n---CDLL---";
		cout<<"\n1.Display";
		cout<<"\n2.insert";
		cout<<"\n";
		cout<<"\n4.exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			l.Display();
			break;
		case 2:
			cout<<"\nEnter the data";
			cin>>e;
			cout<<"\nEnter the position";
			cin>>pos;
			l.InsertPos(e,pos);
			break;
		case 3:
			cout<<"\nEnter the position";
			cin>>pos;
			l.DeletePos(pos);
			break;

		}

	}
}