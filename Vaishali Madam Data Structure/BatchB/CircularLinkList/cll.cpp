#include"cll.h"
///////////////////////////
CLL::CLL()
{
	last=NULL;
}
///////////////////////////
void CLL::InsertPos(int data,int pos)
{
	Node *temp=new Node(data);
	if(last==NULL)
	{
		last=temp;
		last->SetNext(last);
		return;
	}
	if(pos==1)
	{
		temp->SetNext(last->GetNext());
		last->SetNext(temp);
		return;
	}
	Node *p=last->GetNext();
	int i=1;
	while(p!=last)
	{
		if(i==pos-1)
		{
			temp->SetNext(p->GetNext());
			p->SetNext(temp);
			return;
		}
		i++;
		p=p->GetNext();
	}
	temp->SetNext(last->GetNext());
	last->SetNext(temp);
	last=temp;
}

///////////////////////////
void CLL::DeletePos(int pos)
{
	if(last==NULL)
	{
		cout<<"\nNo nodes to delete";
		return;
	}
	Node *p=last->GetNext();
	if(pos==1)
	{
		//Only 1 node
		if(p==last)
		{
			last=NULL;		
		}
		else
		{
			last->SetNext(p->GetNext());
			cout<<"\n"<<p->GetData()<<" is deleted";			
		}
		delete p;
		return;
	}
	int i=1;
	while(p!=last)
	{
		if(i==pos-1)
		{
			Node *q=p->GetNext();
			p->SetNext(q->GetNext());
			if(q==last)
			{
				last=p;
			}
			cout<<"\n"<<q->GetData()<<" is deleted";
			return;
		}
		i++;
		p=p->GetNext();
	}
	cout<<"\nInvalid positon";
}
///////////////////////////
void CLL::Display()
{
	if(last==NULL)
	{
		cout<<"\nNo nodes to display";
		return;
	}
	Node *p=last;
	while(1)
	{
		p=p->GetNext();
		cout<<"\t"<<p->GetData();
		if(p==last)
		{
			break;
		}
	}
}
///////////////////////////
CLL::~CLL()
{
	if(last!=NULL)
	{ 
		Node *p=last->GetNext();
		while(p!=last)
		{
			last->SetNext(p->GetNext());
			delete p;
			p=last->GetNext();
		}
		delete p;
	}

}

///////////////////////////