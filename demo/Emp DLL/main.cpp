#include"DLL.h"

void main()
{
	int pos,ch;
	Emp e;

	DLL l;
	while(ch!=4)
	{
		cout<<"\n\n---DLL---\n";
		cout<<"\n1.display";
		cout<<"\n2.Insert Position";
		cout<<"\n";
		cout<<"\n4.exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			l.display();
			break;
		case 2:
			cout<<"\nEnter the info";
			cin>>e;
			cout<<"\nEnter the position:";
			cin>>pos;
			l.InsertPos(e,pos);
			break;
		case 3:
			cout<<"\nEnter the position:";
			cin>>pos;
			l.DeletePos(pos);
			break;
		}
	}

}
