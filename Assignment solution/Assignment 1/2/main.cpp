#include"stack.h"
#define MAX 10
void main()
{
	Stack st;

	int n1,n2,val;
	cout<<"\nEnter the no of values in stack 1";
	cin>>n1;
	n2=MAX-n1;
	cout<<"\n\n----Stack 1----\n";
	for(int i=0;i<n1;i++)
	{
		cout<<"\nEnter the value : ";
		cin>>val;
		st.push1(val);
	}

	cout<<"\n\n----Stack 2----\n";
	for(i=0;i<n2;i++)
	{
		cout<<"\nEnter the value : ";
		cin>>val;
		st.push2(val);
	}

		
	
	st.display1();
	st.display2();

}