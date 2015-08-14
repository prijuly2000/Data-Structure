#include"Stack.h"

void main()
{
	int ch=1,x,i,n;
	Stack st1,st2;


	while(ch!=9)
	{
		cout<<"\n---Stack Operations---\n";
		cout<<"\n1.Display";
		cout<<"\n2.Push";
		cout<<"\n3.Pop";
		cout<<"\n4.Display using operator<<";
		cout<<"\n5.Equality of stacks";
		cout<<"\n6.Write the stack to the file";
		cout<<"\n7.Read the stack from the file";
		cout<<"\n9.Exit";
		cout<<"\nEnter the choice: ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			st1.display();
			break;
		case 2:
			cout<<"Enter the element to push : ";
			cin>>x;
			st1.push(x);
			break;
		case 3:
			if(st1.pop(x));
			{
				cout<<"Poped : "<<x<<"\n\n";
			}
			break;
		case 4:
			cout<<st1;
			break;
		case 5:
			cout<<"\nEnter the no. of elements of stack 2";
			cin>>n;
			cout<<"\nEnter the elements of stack 2";
			for(i=0;i<n;i++)
			{
				cin>>x;
				st2.push(x);
			}
			if(st1==st2)
				cout<<"\nStacks are equal\n";
			else
				cout<<"\nStacks are NOT equal\n";
			break;
		case 6:
			st1.writefile();
			break;
		case 7:
			st1.readfile();
			break;

			

		}
	}
}