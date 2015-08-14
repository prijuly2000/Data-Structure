#include"CLL.h"

CLL::CLL()
{
	last=NULL;
}

void CLL::InsertPos(int data,int pos)
{
	Node *temp=new Node(data);
	if(last==NULL)
	{
		last=temp;
		last->setnext(last);
		return;
	}

	Node *p=last->getnext();

	if(pos==1)
	{
		temp->setnext(p);
		last->setnext(temp);
		return;
	}

	int i=1;
	
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
	temp->setnext(p->getnext());
	p->setnext(temp);
	last=temp;
}

void CLL::display()
{
	if(last==NULL)
	{
		cout<<"\nNo nodes\n";
		return ;
	}

	Node *p=last->getnext();

	while(p!=last)
	{
		cout<<" "<<p->getdata();
		p=p->getnext();
	}
	cout<<" "<<last->getdata();
}

void CLL::DeletePos(int pos)
{
	if(last==NULL)
	{
		cout<<"\nNo nodes to delete\n";
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

void CLL::InsertSort(int data)
{
	Node *temp=new Node(data);

	if(last==NULL)
	{
		last=temp;
		last->setnext(last);
		return;
	}

	Node *p=last->getnext();
	if(temp->getdata()<p->getdata())
	{
		temp->setnext(p);
		last->setnext(temp);
		return;
	}

	Node *q=p;
	while(p!=last)
	{
		if(p->getnext()->getdata()>temp->getdata())
		{
			temp->setnext(p->getnext());
			p->setnext(temp);
			return;
		}
		p=p->getnext();
	}

	temp->setnext(last->getnext());
	last->setnext(temp);
	last=temp;

}

CLL::~CLL()
{
	Node *p=last->getnext();
	while(p!=last)
	{
		last->setnext(p->getnext());
		delete p;
		p=last->getnext();

	}
	delete last;
}