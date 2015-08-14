#include"LLL.h"

LLL::LLL()
{
	start=NULL;
}

void LLL::InsertPos(Emp & e,int pos)
{
	Node *temp=new Node(e);
	if(start==NULL)
	{
		start=temp;
		return;
	}

	if(pos==1)
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

void LLL::display()
{
	if(start==NULL)
	{
		cout<<"\nNo nodes\n";
		return;
	}

	Node *p=start;
	while(p!=NULL)
	{
		cout<<p->getdata();
		p=p->getnext();
	}

}

void LLL::DeletePos(int pos)
{
	if(start==NULL)
	{
		cout<<"\nNo nodes\n";
		return;
	}

	Node *p=start;
	if(pos==1)
	{
		start=start->getnext();
		delete p;
		return;
	}

	int i=1;

	while(p->getnext()!=NULL)
	{
		if(i==pos-1)
		{
			Node *q=p->getnext();
			p->setnext(q->getnext());
			delete q;
			return;
		}
	}
}