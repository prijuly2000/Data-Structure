#include"CLL.h"

CLL::CLL()
{
	last=NULL;
}

void CLL::insertpos(int data,int pos)
{
	Node *temp=new Node(data);
	if(last==NULL)
	{
		last=temp;
		last->setnext(temp);
		last=temp;
		return;
	}

	if(pos==1)
	{
		temp->setnext(last->getnext());
		last->setnext(temp);
		return;
	}

	int i=1;
	Node *p=last->getnext();

	while(p!=last)
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
}

void CLL::deletepos(int pos)
{
	if(last==NULL)
	{
		cout<<"\nSory no nodes\n";
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
			if(last==q)
			{
				last=p;
			}
			delete q;
			return;
		}
		i++;
		p=p->getnext();
	}


}
void CLL::display()
{
	if(last!=NULL)
	{
		cout<<"\n\nCircular linked list : ";
		Node *p=last->getnext();
		while(p!=last)
		{
			cout<<" "<<p->getdata();
			p=p->getnext();
		}
		cout<<" "<<p->getdata();
	}
	else
	{
		cout<<"\nempty\n";
	}
}

CLL::~CLL()
{
	Node *p=last->getnext();
	if(last!=NULL)
	{
		while(p!=last)
		{
			last->setnext(p->getnext());
			delete p;
			p=last->getnext();
		}
		delete p;
	}
}