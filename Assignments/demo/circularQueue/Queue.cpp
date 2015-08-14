#include"Queue.h"
#define MAX 10
Queue::Queue()
{
	f=r=-1;
}

bool Queue::push(int x)
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

bool Queue::pop(int &x)
{
	if(!IsEmpty())
	{
		x=s[f];
		if(f==MAX-1)
			f=0;
		else if(f==r)
			f=r=-1;
		else
			f++;
		return true;
	}
	else
		return false;
}

void Queue::display()
{
	cout<<"\nCircular Queue : ";
	for(int i=f;i<=r;i++)
		cout<<" "<<s[i];
	cout<<endl;
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