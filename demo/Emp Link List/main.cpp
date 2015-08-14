#include"LLL.h"

void main()
{
	int pos,ch=0;
	Emp e;

	LLL l;
	while(ch!=4)
	{
		cout<<"\n\n---LLL---\n";
		cout<<"\n1.display";
		cout<<"\n2.insert";
		cout<<"\n4.Exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			l.display();
			break;
		case 2:
			cout<<"\nEnter the data";
			cin>>e;
			cout<<"\nEnter the position :";
			cin>>pos;
			l.InsertPos(e,pos);
			break;
		case 3:
			cout<<"\nEnter the position to delete:";
			cin>>pos;
			l.DeletePos(pos);
			break;
		}
	}
	
}