#include"Stack.h"
#include<fstream.h>
Stack::Stack()
{
	top=-1;
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

void Stack::display()
{
	if(!IsEmpty())
	{
		cout<<"\n\nStack :";
		for(int i=top;i>=0;i--)
			cout<<" "<<s[i];
		cout<<endl;
	}
	else
		cout<<"\nSory Stack is empty\n";

}

bool Stack::push(int x)
{
	if(!IsFull())
	{
		s[++top]=x;
		return true;
	}
	else
	{
		cout<<"\n\nStack is Full\n";
		return false;
	}

}

bool Stack::pop(int &x)
{
	if(!IsEmpty())
	{
		x=s[top--];
		count++;
		return true;
	}
	else
	{
		cout<<"\n\nStack is Empty\n";
		return false;
	}
	
}

ostream & operator<<(ostream &o,Stack &st)
{
	if(!st.IsEmpty())
	{
		o<<"\n\nStack :";
		for(int i=st.top;i>=0;i--)
			o<<" "<<st.s[i];
		o<<endl;
	}
	else
		o<<"\nSory Stack is empty\n";
	return o;
}

bool Stack::operator==(Stack &st)
{
	
	if(top!=st.top)
	{
		return false;
	}
	
	for(int i=0;i<=top;i++)
	{
		if(s[i]!=st.s[i])
			return false;
	}
	return true;
}

void Stack::writefile()
{
	ofstream out;
	out.open("data.txt",ios::binary);
		
	out.write((char*)s,sizeof(int)*count);

}

int Stack::count=0;
void Stack::readfile()
{
	
	ifstream in;
	in.open("data.txt",ios::binary);
	in.read((char*)s,sizeof(s));
	in.read((char*)s,sizeof(int)*(count));
	top=count-1;
}
