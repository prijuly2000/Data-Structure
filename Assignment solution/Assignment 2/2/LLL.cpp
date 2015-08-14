#include"LLL.h"

LLL::LLL()
{
	start=NULL;
}


void LLL::display()
{
	if(start==NULL)
	{
		cout<<"\nLink list is empty\n";
		return;
	}

	Node *p=start;
	while(p!=NULL)
	{
		p->getdata().display();
		p=p->getnext();
	}
}

void LLL::InsertPos(Emp &e,int pos)
{
	Node *temp=new Node(e);
	//No nodes & begining insert

	if(start==NULL ||pos==1)
	{
		temp->setnext(start);
		start=temp;
		return ;
	}

	
	//insert at position
	Node *p=start;
	int i=1;

	while(p->getnext()!=NULL)
	{
		if(i==pos-1)
		{
			temp->setnext(p->getnext());
			p->setnext(temp);
			return;
		}
		p=p->getnext();
		i++;
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
			return ;
		}
		i++;
		p=p->getnext();

		
	}
}

LLL::~LLL()
{
	Node *temp;
	while(start!=NULL)
	{
		temp=start;
		start=start->getnext();
		delete temp;
	}
}

ostream & operator<<(ostream & o,LLL & l)
{
	if(l.start==NULL)
	{
		cout<<"\nLink list is empty\n";
		return o;
	}

	Node *p=l.start;
	while(p!=NULL)
	{
		o<<*p;//operator(o,p)
		p=p->getnext();
	}
	return o;

}
