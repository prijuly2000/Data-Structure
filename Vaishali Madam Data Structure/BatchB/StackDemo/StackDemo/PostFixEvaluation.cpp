#include"stack.h"
////////////////////////////
void main()
{
	char postfix[30];
	cout<<"\nEnter the postfix expression";
	cin>>postfix;
	int i=0,op1,op2;
	Stack st;
	while(postfix[i]!='\0')
	{
		//Check if it is an operand
		if(postfix[i]>='0' && postfix[i]<='9')
		{
			//Will push only the ascii code
			//st.Push(postfix[i]);
			//ascii code of 0 is 48 so =>(postfix[i]-48)
			st.Push(postfix[i]-48);
		}
		else if(postfix[i]=='+' || postfix[i]=='-' 
			|| postfix[i]=='*' || postfix[i]=='/')
		{
			st.Pop(op1);
			st.Pop(op2);
			switch(postfix[i])
			{
			case '+':
				st.Push(op2+op1);
				break;
			case '-':
				st.Push(op2-op1);
				break;
			case '*':
				st.Push(op2*op1);
				break;
			case '/':
				st.Push(op2/op1);
				break;
			}
		}
		i++;
	}
	st.Pop(op1);
	cout<<"\nResult ="<<op1;
}