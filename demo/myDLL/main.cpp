#include"DLL.h"

void main()
{
	DLL l;

	int ch,data,pos;

	while(ch!=4)
	{
		cout<<"\n\n----linklist----\n";
		cout<<"\n1.display";
		cout<<"\n2.insert ";
		cout<<"\n3.Delete ";
		cout<<"\n4.Exit";
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
			cout<<"\nEnter the position to delete : ";
			cin>>pos;
			l.DeletePos(pos);
			break;
		
		}
	}

}