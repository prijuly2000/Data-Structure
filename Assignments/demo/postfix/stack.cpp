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


bool Stack::pop(int &x)
{
	if(!IsEmpty())
	{
		x=s[top--];
		return true;		
	}
	else
		return false;
}

void Stack::display()
{
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