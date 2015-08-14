#include"Queue.h"
#define MAX 10

Queue::Queue()
{
	f=r=-1;
}

bool Queue::pushf(int x)
{
	
	if(f!=0)
	{
		s[--f]=x;
		return true;
	}
	else
		return false;
}

bool Queue::pushr(int x)
{
	if(!IsFull())
	{
		if(IsEmpty())
			f=r=0;
		else 
			r++;
		s[r]=x;
		return true;
	}
	else
		return false;
}

bool Queue::popf(int &x)
{
	if(!IsEmpty())
	{
		x=s[f];
		if(f==r)
			f=r=-1;
		else
			f++;
		return true;
	}
	else
		return false;
}

bool Queue::popr(int &x)
{
	if(!IsEmpty())
	{
		x=s[r--];
		return true;
	}
	else
		return false;
}

void Queue::display()
{
	if(!IsEmpty())
	{
		cout<<"Queue : ";
		for(int i=f;i<=r;i++)
			cout<<" "<<s[i];
		cout<<endl;
	}
	else
		cout<<"\nQueue is empty\n";
}

bool Queue::IsEmpty()
{
	if(f==-1 &&r==-1)
		return true;
	else 
		return false;
}

bool Queue::IsFull()
{
	if(r==MAX-1)
		return true;
	else
		return false;

}