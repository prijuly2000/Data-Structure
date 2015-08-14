#include"CDLL.h"

CDLL::CDLL()
{
	last=NULL;
}

void CDLL::InsertPos(int data,int pos)
{
	Node *temp=new Node(data);
	
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
		p->setprev(temp);
		last->setnext(temp);
		temp->setprev(last);
		return;
	}

	int i=1;
	while(p!=last)
	{
		if(i==pos-1)
		{
			temp->setnext(p->getnext());
			temp->setprev(p);
			p->setnext(temp);
			temp->getnext()->setprev(temp);
			return;
		}
		i++;
		p=p->getnext();
	}
	temp->setnext(last->getnext());
	temp->getnext()->setprev(temp);
	last->setnext(temp);
	temp->setprev(last);
	last=temp;
}

void CDLL::display()
{
	if(last==NULL)
	{
		cout<<"\nCDLL empty\n";
		return;
	}

	cout<<"\nCDLL : ";
	Node *p=last->getnext();
	while(p!=last)
	{
		cout<<" "<<p->getdata();
		p=p->getnext();

	}
	cout<<" "<<p->getdata();
}

void CDLL::DeletePos(int pos)
{
	if(last==NULL)
	{
		cout<<"\nCDLL empty,nothing to delete\n";
		return;
	}

	Node *p=last->getnext();
	if(pos==1)
	{
		if(p==last)
		{
			last=NULL;
		}
		else
		{
			last->setnext(p->getnext());
			p->getnext()->setprev(last);
		}
		delete p;
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
			if(q==last)
			{
				last=p;;
			}
			
			delete q;
			return;
		}
		i++;
		p=p->getnext();

	}



}