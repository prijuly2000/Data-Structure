#include"stack.h"
///////////////////////////////////
void main1()
{
	Stack st;
	int data,iChoice=0;
	while(iChoice!=5)
	{
		cout<<"\n\t\t1.Push";
		cout<<"\n\t\t2.Pop";
		cout<<"\n\t\t3.Display";
		cout<<"\n\t\t4.Peek";
		cout<<"\n\t\t5.Exit";
		cout<<"\nEnter your choice";
		cin>>iChoice;
		switch(iChoice)
		{
		case 1:
			{
				cout<<"\nEnter data to push";
				cin>>data;
				if(!st.Push(data))
				{
					cout<<"\nStack overflow";
				}
			}
			break;
		case 2:
			if(st.Pop(data))
			{
				cout<<"\n"<<data<<" is popped";
			}
			else
			{
				cout<<"\nStack underflow";
			}
			break;
		case 3:
			cout<<st; //
			//st.Display(); 
			break;
		case 4:
			if(st.Peek(data))
			{
				cout<<"\n"<<data<<" is the top most element";
			}
			else
			{
				cout<<"\nNo elements ";
			}
			break;
		case 5:
			break;
		default:
			cout<<"\nInvalid choice";
		}
	}
}