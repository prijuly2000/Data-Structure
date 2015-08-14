#include"Queue.h"

void main()
{
	int ch=1,x,i,n;
	Queue q1,q2;

	
	while(ch!=9)
	{
		cout<<"\n---Queue Operations---\n";
		cout<<"\n1.Display";
		cout<<"\n2.Push";
		cout<<"\n3.Pop";
		cout<<"\n4.Display using operator<<";
		cout<<"\n5.Equality of Queue";
		cout<<"\n6.Write the Queue to the file";
		cout<<"\n7.Read the Queue from the file";
		cout<<"\n9.Exit";
		cout<<"\nEnter the choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			q1.display();
			break;
		case 2:
			cout<<"Enter the element to push : ";
			cin>>x;
			q1.push(x);
			break;
		case 3:
			if(q1.pop(x))
				cout<<"Poped : "<<x<<"\n\n";
			
			break;
		case 4:
			cout<<q1;
			break;
		case 5:
			cout<<"\nEnter the no. of elements of stack 2";
			cin>>n;
			cout<<"\nEnter the elements of stack 2";
			for(i=0;i<n;i++)
			{
				cin>>x;
				q2.push(x);
			}
			if(q1==q2)
				cout<<"\nStacks are equal\n";
			else
				cout<<"\nStacks are NOT equal\n";
			break;
		case 6:
			q1.writefile();
			break;
		case 7:
			q1.readfile();
			break;

			

		}
	}
	

}