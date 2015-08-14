#include"stack.h"
#define MAX 10
Stack::Stack()
{
	top=-1;
}

bool Stack::push(int x)
{
	if(!IsFull())
	{
		s[++top]=x;
		return true;
	}
	else
		return false;
}


bool Stack::pop(int &p)
{
	
	if(!IsEmpty())
	{
		p=s[top--];
		return true;
	}
	else
		return false;
}

bool Stack::peek(int &x)
{
	
	if(!IsEmpty())
	{
		x=s[top];
		return true;
	}
	else
		return false;
			
			
}

void Stack::display()
{
	cout<<"\nStack values";
	for(int i=top;i>=0;i--)
		cout<<" "<<s[i];
	cout<<endl;
}

bool Stack::IsEmpty()
{
	if(top==-1)
		return true;
	else
		return false;

}

bool Stack::IsFull()
{
	if(top==MAX-1)
		return true;
	else
		return false;
}