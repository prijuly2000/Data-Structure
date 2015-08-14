#include"linear search.h"

void main()
{
	linear l;
	int ch,data;

	while(ch!=3)
	{
		cout<<"\n1.Accept";
		cout<<"\n2.search";
		cout<<"\n3.exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			l.accept();
			break;
		case 2:
			cout<<"\nEnter tha data to search:";
			cin>>data;
			l.search(data);
			cout<<"\nIndex:"<<data+1;
			
			cout<<"\nData:"<<l.getdata(data);;
			break;

		}
	}
}
