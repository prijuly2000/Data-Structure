#include"Linklist.h"

Linklist::Linklist()
{
	start=NULL;
}

void Linklist::InsertBeg(int data)
{
	Node *temp=new Node(data);
	temp->setnext(start);
	start=temp;
}
	
void Linklist::display()
{
	cout<<"\n\nLinklist : ";
	Node *p=start;
	if(p==NULL)
	{
		cout<<"No nodes";
		return;
	}

	while(p!=NULL)
	{
		cout<<" "<<p->getdata();
		p=p->getnext();
	}
}

void Linklist::InsertEnd(int data)
{
	Node *p=start;
	Node *temp=new Node(data);
	if(start==NULL)
	{
		start=temp;
		return;
	}

	while(p->getnext()!=NULL)
	{
		p=p->getnext();
	}
	p->setnext(temp);
	
}

void Linklist::InsertPos(int data,int pos)
{
	Node *temp=new Node(data);
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

void Linklist::DeleteBeg()
{
	if(start==NULL)
	{
		cout<<"Sory no nodes";
		return;
	}

	Node *temp=start;
	start=start->getnext();
	delete temp;
	cout<<"\nFirst deleted\n";
}

Linklist::~Linklist()
{
	Node *temp;
	while(start!=NULL)
	{
		temp=start;
		start=start->getnext();
		delete temp;
	}
}

void Linklist::DeleteEnd()
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to delete\n";
		return;
	}

	if(start->getnext()==NULL)
	{
		delete start;
		return;
	}
	
	Node *q,*p=start;
	while(p->getnext()->getnext()!=NULL)
	{
		p=p->getnext();
	}

	q=p->getnext();
	p->setnext(NULL);
	delete q;
	cout<<"\nLast Deleted\n";

}

void Linklist::DeletePos(int pos)
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