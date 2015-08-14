#include"LLL.h"

void main()
{
	int ch,data,pos;
	LLL l;

	while(ch!=5)
	{
		cout<<"\n\n----Link list----\n";
		cout<<"\n1.display using operator<<";
		cout<<"\n2.Insert";
		cout<<"\n3.Write file";
		cout<<"\n4.Read file";
		cout<<"\n5.Exit";
		cout<<"\nEnter the choice";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<l;
			break;
		case 2:
			cout<<"\n\nEnter the data : ";
			cin>>data;
			cout<<"\nEnter the position : ";
			cin>>pos;
			l.InsertPos(data,pos);
			break;
		case 3:
			l.writefile();
			break;
		case 4:
			l.readfile();
			break;
			
		}
	}

}