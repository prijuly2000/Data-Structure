#include"stack.h"
#define MAX 10
Stack::Stack()
{
	top1=-1;
	top2=MAX-1;
}

bool Stack::push1(int x)
{
	if(!IsFull())
	{
		s[++top1]=x;
		return true;
	}
	else
		return false;
}

bool Stack::push2(int x)
{
	if(!IsFull())
	{
		s[--top2]=x;
		return true;
	}
	else
		return false;
}

bool Stack::pop1(int &p)
{
	
	if(!IsEmpty1())
	{
		p=s[top1--];
		return true;
	}
	else
		return false;
}

bool Stack::pop2(int &p)
{
	
	if(!IsEmpty2())
	{
		p=s[top2++];
		return true;
	}
	else
		return false;
}



void Stack::display1()
{
	if(!IsEmpty1())
	{
		cout<<"\nStack values";
		for(int i=top1;i>=0;i--)
			cout<<" "<<s[i];
		cout<<endl;
	}
	else
		cout<<"\nStack is empty\n";
}

void Stack::display2()
{
	if(!IsEmpty2())
	{
		cout<<"\nStack values";
		for(int i=top2;i<MAX-1;i++)
			cout<<" "<<s[i];
		cout<<endl;
	}
	else
		cout<<"\nStack is empty\n";
}

bool Stack::IsEmpty1()
{
	if(top1==-1)
		return true;
	else
		return false;

}

bool Stack::IsEmpty2()
{
	if(top2==MAX-1)
		return true;
	else
		return false;

}

bool Stack::IsFull()
{
	if(top1==top2-1)
	{
		cout<<"\nstack is full\n";
		return true;
	}
	else
		return false;
}