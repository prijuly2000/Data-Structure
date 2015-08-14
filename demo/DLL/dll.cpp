#include"dll.h"


Dlink::Dlink()
	{
		start = NULL;
	}
Dlink::~Dlink()
	{
		Node *p;
		while(start!=NULL)
		{
			p=start;
			start=start->GetNext();
			delete p;
		}
	}

void Dlink::InsetBeg(int data)
	{
	    
		Node *temp=new Node(data);
		if(start==NULL)
		{
		temp->SetNext(start);
		start=temp;
		return;
		}

        temp->SetNext(start);
		start->SetPreve(temp);
		start=temp;
		

	}

void Dlink::Display()
{ 
	cout<<"\n\n";
	if(start==NULL)
	{
		cout<<"No Element"<<endl;
		return;
	}

	Node *p = start;
	while(p!=NULL)
	{
		cout<<p->GetData()<<"\t";
		p=p->GetNext();
	}
	cout<<"\n\n";
}
void Dlink::InsertEnd(int data)
{
	Node *temp=new Node(data);
	if(start==NULL)
	{
		start=temp;
		return ;
	}
	Node *p=start;
	while(p->GetNext()!=NULL)
	{
		p=p->GetNext();
	}
	temp->SetPreve(p);
	p->SetNext(temp);
}

void Dlink::InsertPos(int data,int pos)
{
	Node *temp=new Node(data);
	if(start==NULL||pos==1)
	{
		temp->SetNext(start);
		start->SetPreve(temp);
		start=temp;
		return ;
	}
	int i=1;
	Node *p=start;
	while(p->GetNext()!=NULL)
	{
		if(i==pos-1)
		{
			temp->SetNext(p->GetNext());
			temp->SetPreve(p);
			temp->GetNext()->SetPreve(temp);
			p->SetNext(temp);
		    return ;
		}
	    p=p->GetNext();
		i++;
	
	}
	temp->SetPreve(p);
	p->SetNext(temp);
	
}

void Dlink::DeleteBeg()
{
	if(start==NULL)
	{
		cout<<"No Elments";
		return ;
	}
	Node *p=start;
	start=p->GetNext();
	if(start!=NULL)
	{
		start->SetPreve(NULL);
	}
	delete p;
}

void Dlink::DeleteEnd()
{
	if(start==NULL)
	{
		cout<<"No Elment";
		return;
	}

	Node *p=start;

	if(p->GetNext()==NULL)
	{
		delete p;
		start=NULL;
		return;
	}
	while(p->GetNext()->GetNext()!=NULL)
	{
		p=p->GetNext();
	}
	delete p->GetNext();
	p->SetNext(NULL);
}


void Dlink::DeletePos(int pos)
	{
		if(start==NULL)
		{
			cout<<"No elment";
			return ;
		}
		Node *p=start;
		if(pos==1)
		{
			start=start->GetNext();
			if(start!=NULL)
			{
			start->SetPreve(NULL);
			}
			delete p;
			return ;
		}
		int i=1;
		while(p->GetNext()!=NULL)
		{
			if(i==(pos-1))
			{
				Node *q=p->GetNext();
				p->SetNext(q->GetNext());
				if(q->GetNext()!=NULL)
				{
				q->GetNext()->SetPreve(p);
				}
				delete q;
				return ;
			}
			i++;
			p=p->GetNext();
		}
	}
