#include"Queue.h"
#define MAX 10
Queue::Queue()
{
	f=r=-1;
}

bool Queue::pushr(int x)
{
	if(!IsFull())
	{
		if(IsEmpty())
			f=r=0;
		else if(r==MAX-1)
			r=0;
		else
			r++;
		s[r]=x;
		return true;			

	}
	else
		return false;
}

bool Queue::pushf(int x)
{
	if(!IsFull())
	{
		if(IsEmpty())
		{
			f=MAX-1;
			r=MAX-1;
		}
		else if(f==0)
			f=MAX-1;
		else
			f--;
		s[f]=x;
		return true;
	}
	else
		return false;
}

bool Queue::popf(int &x)
{
	if(IsEmpty())
	{
		cout<<"Sory Empty DeQue";
		return false;
	}
	
		x=s[f];
		if(f==MAX-1)
			f=0;
		else if(f==r)
			f=r=-1;
		else
			f++;
		return true;
	
}

bool Queue::popr(int &x)
{
	if(IsEmpty())
	{
		cout<<"Sory Empty DeQue";
		return false;
	}
	
	x=s[r];
	if(r==0)
		r=MAX-1;
	else if(f==r)
		f=r=-1;
	else
		r--;
	return true;
	
	
}

void Queue::display()
{
	if(IsEmpty())
	{
		cout<<"\nEmpty queue\n";
		return;
	}
	if(f<r)
	{
		cout<<"\nCircular Queue : ";
		for(int i=f;i<=r;i++)
			cout<<" "<<s[i];
		cout<<endl;
	}
	else
	{
		for(int i=f;i<=MAX-1;i++)
			cout<<" "<<s[i];
		for(i=0;i<r;i++)
			cout<<" "<<s[i];
		cout<<endl;
	}

	
}

bool Queue::IsEmpty()
{
	if(f==-1 && r==-1)
		return true;
	else
		return false;
}

bool Queue::IsFull()
{
	if((f==0 && r==MAX-1) || (r==f-1))
		return true;
	else
		return false;
}