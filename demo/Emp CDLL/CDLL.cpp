#include"CDLL.h"

CDLL::CDLL()
{
	last=NULL;
}

void CDLL::Display()
{
	if(last==NULL)
	{
		cout<<"\nNo nodes\n";
		return;
	}

	Node *p=last->getnext();

	while(p!=last)
	{
		cout<<p->getdata();
		p=p->getnext();
	}

	cout<<p->getdata();
}


void CDLL::InsertPos(Emp & e,int pos)
{
	Node *temp=new Node(e);
	if(last==NULL)
	{
		last=temp;
		last->setnext(last);
		last->setprev(last);
		return;
	}

	Node *p=last->getnext();
	if(pos==1)
	{
		temp->setnext(p);
		temp->setprev(last);
		last->setnext(temp);
		p->setprev(temp);
		return;
	}

	int i=1;
	while(p!=last)
	{
		if(i==pos-1)
		{
			temp->setnext(p->getnext());
			temp->setprev(p);
			temp->getnext()->setprev(temp);
			p->setnext(temp);
			return;
		}
		i++;
		p=p->getnext();
	}
	temp->setnext(last->getnext());
	temp->setprev(last);
	last->setnext(temp);
	temp->getnext()->setprev(temp);
	last=temp;
}

void CDLL::DeletePos(int pos)
{
	if(last==NULL)
	{
		cout<<"\nNo nodes\n";
		return;
	}

	Node *p=last->getnext();
	if(pos==1)
	{
		if(p==last)
			last=NULL;
		else
		{
			last->setnext(p->getnext());
			p->getnext()->setprev(last);
		}
		delete p;2
		return;
	}

	int i=1;
	while(p!=last)
	{
		if(i==pos-1)
		{
			Node *q=p->getnext();
			p->setnext(q->getnext());
			q->getnext()->setprev(p);
			if(last==q)
				last=p;
			delete q;
			return;

		}
		i++;
		p=p->getnext();
	}
}