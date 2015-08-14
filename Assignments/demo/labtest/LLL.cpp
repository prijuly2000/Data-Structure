#include"LLL.h"
#include<fstream.h>
#include"Student.h"
LLL::LLL()
{
	start=NULL;
}

ostream & operator<<(ostream &o,LLL &l)
{
	
	if(l.start==NULL)
	{
		cout<<"\nNo nodes\n";		
		return o;
	}
	Node *p=l.start;
	while(p!=NULL)
	{
		o<<p->getdata();		
		p=p->getnext();
	}
	return o;
}

void LLL::InsertPos(Student &s,int pos)
{
	Node *temp=new Node(s);

	if(start==NULL || pos==1)
	{
		temp->setnext(start);
		start=temp;
		return;
	}

	int i=1;
	Node *p=start;

	while(p->getnext()!=NULL)
	{
		if(i==pos-1)
		{
			temp->setnext(p->getnext());
			p->setnext(temp);
			return;
		}
		i++;
		p=p->getnext();
	}
	p->setnext(temp);
}

void LLL::DeletePos(int pos)
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to delete\n";
		return;
	}

	Node *p=start;

	if(pos==1)
	{
		cout<<"\n---Deleted node---\n";
		start=start->getnext();
		cout<<p->getdata();
		delete p;
		return;
	}

	int i=1;
	while(p->getnext()!=NULL)
	{
		if(i==pos-1)
		{
			cout<<"\n---Deleted node---\n";
			Node *q=p->getnext();
			cout<<q->getdata();
			p->setnext(q->getnext());
			
			delete q;
			return ;
		}
		i++;
		p=p->getnext();

		
	}
}

void LLL::Writefile()
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to write\n";
		return;
	}

	Node *p=start;
	ofstream out("File.txt",ios::binary);
	while(p->getnext()!=NULL)
	{
		out.write((char*)&p->getdata(),sizeof(Student));
		p=p->getnext();
	}
	out.write((char*)&p->getdata(),sizeof(Student));
}


void LLL::Readfile()
{
	int pos=1;
	Node *p=new Node();
	ifstream in("File.txt",ios::binary);
	while(!in.eof())
	{
		Student s;
		in.read((char*)&s,sizeof(Student));
		InsertPos(s,pos);
		pos++;
		
	}
	DeletePos(pos-1);
}