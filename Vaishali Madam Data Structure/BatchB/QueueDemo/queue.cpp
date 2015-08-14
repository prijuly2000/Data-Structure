#include"Queue.h"
////////////////////////////////////
Queue::Queue()
{
	front=rear=-1;
}
////////////////////////////////////
bool Queue::IsEmpty()
{
	if(front==-1 && rear==-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////////////
bool Queue::IsFull()
{
	if((front==0 && rear==MAX-1) || (rear==front-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////////////
bool Queue::Push(int x)
{
	if(!IsFull())
	{
		//Find the new value of rear
		if(IsEmpty())
		{
			front=rear=0;
		}
		else
		{
			rear = (rear+1) % MAX;
		}
		/*else if(rear==MAX-1)
		{
			rear=0;
		}
		else
		{
			rear++;
		}
		*/
		q[rear]=x;
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////////////
bool Queue::Pop(int &x)
{
	if(!IsEmpty()) //front and rear are not =-1
	{
		x = q[front];
		//Only one element and after this queue will become empty
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front = (front+1)%MAX;
		}
		/*
		else if(front==MAX-1)
		{
			front=0;
		}
		else
		{
			front++;
		}
		*/
		return true;
	}
	else
	{
		return false;
	}
}
////////////////////////////////////
void Queue::Display()
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
ostream &operator<<(ostream &o,Queue &st)
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