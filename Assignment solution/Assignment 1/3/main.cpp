#include"stack.h"

void main()
{
	int op1,op2;
	char postfix[10];
	cout<<"Enter the expression : ";
	cin>>postfix;
	Stack st;

	for(int i=0;i<10;i++)
	{
		if(postfix[i]=='+'||postfix[i]=='-'||postfix[i]=='/'||postfix[i]=='*')
		{
			switch(postfix[i])
			{
			case '+':
				{
					st.pop(op2);
					st.pop(op1);
					st.push(op1+op2);
				}
				break;
			case '-':
				{
					st.pop(op2);
					st.pop(op1);
					st.push(op1-op2);
				}
				break;
			case '*':
				{
					st.pop(op2);
					st.pop(op1);
					st.push(op1*op2);
				}
				break;
			case '/':
				{
					st.pop(op2);
					st.pop(op1);
					st.push(op1/op2);
				}
				break;

			}
		}
		else if(postfix[i]>='0' && postfix[i]<='9')
			st.push(postfix[i]-48);
	}
	int x;
	st.pop(x);
	cout<<"\n\nOutput= "<<x<<"\n\n";
	
}