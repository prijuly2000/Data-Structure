#include"Queue.h"

void main()
{
	
	int ch=1,x;
	Queue q1,q2;

	
	while(ch!=6)
	{
		cout<<"\n---Queue Operations---\n";
		cout<<"\n1.Display";
		cout<<"\n2.Push rear";
		cout<<"\n3.Pop front";
		cout<<"\n4.push front";
		cout<<"\n5.Pop rear";
		cout<<"\n6.Exit";
		cout<<"\nEnter the choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			q1.display();
			break;
		case 2:
			cout<<"Enter the element to push from rear : ";
			cin>>x;
			if(!q1.pushr(x))
				cout<<"\nQueue is full from rear\n";
			break;
		case 3:
			if(q1.IsEmpty())
			{
				cout<<"\nempty Queue ,Cannot Pop\n";
				break;
			}
			if(q1.popf(x))
				cout<<"Poped from front : "<<x<<"\n\n";
			
			break;
		case 4:
			if(q1.IsEmpty())
			{
				cout<<"\nempty Queue ,Cannot push\n";
				break;
			}
				
			cout<<"Enter the element to push from front : ";
			cin>>x;
			if(!q1.pushf(x))
				cout<<"\nQueue is full from front\n";

			break;
		case 5:
			if(q1.IsEmpty())
			{
				cout<<"\nempty Queue ,Cannot Pop\n";
				break;
			}
			if(q1.popr(x))
				cout<<"Poped from  rear : "<<x<<"\n\n";
			
			break;
		}
	}
			
}