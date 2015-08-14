#include"Graph.h"

void main()
{
	Graph g;
	int data,ch;
	while(ch!=2)
	{
		cout<<"\n\n1.insert";
		cout<<"\n2.Exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"\nEnter the data:";
			cin>>data;
			g.insert(data);
			break;
		}
	}



}