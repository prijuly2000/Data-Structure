#include"LLL.h"
#include<fstream.h>

LLL::LLL()
{
	start=NULL;
}

void LLL::InsertPos(int data,int pos)
{
	Node *temp=new Node(data);
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

ostream &operator<<(ostream &o,LLL &l)
{
	if(l.start==NULL)
	{
		cout<<"\nLink list is empty\n";
		return o;
	}

	cout<<"\nLink list : ";

	Node *p=l.start;
	while(p!=NULL)
	{
		cout<<" "<<p->getdata();
		p=p->getnext();
	}
	return o;

}

void LLL::writefile()
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to write\n";
		return;
	}

	ofstream out("file.txt",ios::binary);
	
	Node *p=start;
	int data;
	while(p!=NULL)
	{
		data=p->getdata();
		out.write((char *)&data,sizeof(int));
		p=p->getnext();
	}
	cout<<"\n\nFile Written with link list data\n\n";
}

void LLL::readfile()
{
	ifstream in;
	in.open("file.txt",ios::binary);
	if(in==NULL)
	{
		cout<<"\nSory check file \n";
		return;
	}
	int data;
	int pos=1;
	
	while(!in.eof())
	{
		in.read((char*)&data,sizeof(int));
		InsertPos(data,pos);
		pos++;
	}
	DeleteEnd();

	cout<<"\n\nLink list created with file data\n\n";

}

void LLL::DeleteEnd()
{
	Node *p=start;
	while(p->getnext()->getnext()!=NULL)
	{
		p=p->getnext();
	}

	Node *q=p->getnext();
	p->setnext(q->getnext());
	delete q;
}