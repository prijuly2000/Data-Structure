#include"stack.h"
////////////////////////////////////
Stack::Stack()
{
	top=-1;
}
////////////////////////////////////
bool Stack::IsEmpty()
{
	if(top==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////////////
bool Stack::IsFull()
{
	if(top==MAX-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////////////
bool Stack::Push(int x)
{
	if(!IsFull())
	{
		s[++top]=x;
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////////////
bool Stack::Pop(int &x)
{
	if(!IsEmpty())
	{
		x=s[top--];
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////////////
bool Stack::Peek(int &x)
{
	if(!IsEmpty())
	{
		x=s[top];
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////////////
void Stack::Display()
{
	if(!IsEmpty())
	{
		cout<<"\nElements :";
		for(int i=top;i>=0;i--)
		{
			cout<<"\t"<<s[i];
		}
	}
	else
	{
		cout<<"\nNo elements to display";
	}
}
////////////////////////////////////
ostream &operator<<(ostream &o,Stack &st)
{
	if(!st.IsEmpty())
	{
		cout<<"\nElements :";
		for(int i=st.top;i>=0;i--)
		{
			o<<"\t"<<st.s[i];
		}
	}
	else
	{
		cout<<"\nNo elements to display";
	}
	return o;
}