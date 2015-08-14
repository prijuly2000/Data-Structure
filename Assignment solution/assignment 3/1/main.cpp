#include"CLL.h"
#include<conio.h>

void main()
{
	CLL l;
	int data,pos,ch;

	while(ch!=5)
	{
		cout<<"\n\n---CLL---\n";
		cout<<"\n1.Display";
		cout<<"\n2.Insert at position";
		cout<<"\n3.Delete";
		cout<<"\n4.Insert in order";
		cout<<"\n5.Exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			l.display();
			break;
		case 2:
			cout<<"\nEnter the data:";
			cin>>data;
			cout<<"Enter the position:";
			cin>>pos;
			l.InsertPos(data,pos);
			break;
		case 3:
			cout<<"Enter the position:";
			cin>>pos;
			l.DeletePos(pos);
			break;
		case 4:
			cout<<"\nInsert in order:";
			cout<<"\nEnter the data:";
			cin>>data;
			l.InsertSort(data);
			break;
		
		}
	}
}