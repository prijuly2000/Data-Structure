#include"Queue.h"
#define MAX 10
#include<fstream.h>
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
		count++;
		return true;
	}
	else
	{
		cout<<"Queue is Empty";
		return false;
	}
}

void Queue::display()
{
	if(!IsEmpty())
	{
		cout<<"\nCircular Queue : ";
		for(int i=f;i<=r;i++)
			cout<<" "<<s[i];
		cout<<endl;
	}
	else
		cout<<"Queue is Empty";

}

bool Queue::operator==(Queue &q)
{
	
	if(f!=q.f && r!=q.r)
	{
		return false;
	}
	
	for(int i=f;i<=r;i++)
	{
		if(s[i]!=q.s[i])
			return false;
	}
	return true;
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

void Queue::writefile()
{
	ofstream out;
	out.open("data.txt",ios::binary);
		
	out.write((char*)s,sizeof(int)*count);

}

int Queue::count=0;
void Queue::readfile()
{
	
	ifstream in;
	in.open("data.txt",ios::binary);
	in.read((char*)s,sizeof(s));
	in.read((char*)s,sizeof(int)*(count));
	f=0;
	r=count-1;
}

ostream & operator<<(ostream & o,Queue &q)
{

	if(!q.IsEmpty())
	{
		cout<<"\nCircular Queue : ";
		for(int i=q.f;i<=q.r;i++)
			cout<<" "<<q.s[i];
		cout<<endl;
	}
	else
		cout<<"Queue is Empty";
	return o;

}
