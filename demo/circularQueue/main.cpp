#include"Queue.h"

void main()
{
	int data,ch=0;
	Queue q1;

	while(ch!=6)
	{
		cout<<"\n\n--Deque--\n";
		cout<<"\n1.display";
		cout<<"\n2.push front";
		cout<<"\n3.pop rear";
		cout<<"\n4.push rear";
		cout<<"\n5.pop front";
		cout<<"\n6.Exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			q1.display();
			break;
		case 2:
			cout<<"\nEnter the data:";
			cin>>data;
			q1.pushf(data);
			break;
		case 3:
			if(q1.popr(data))
				cout<<"poped : "<<data;
			break;
		case 4:
			cout<<"\nEnter the data:";
			cin>>data;
			q1.pushr(data);
			break;
		case 5:
			if(q1.popf(data))
				cout<<"poped : "<<data;
			break;
		}
	}
	
}