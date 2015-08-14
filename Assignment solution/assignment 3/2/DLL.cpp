#include"DLL.h"

DLL::DLL()
{
	start=NULL;
}

void DLL::InsertPos(int data,int pos)
{
	Node *temp=new Node(data);
	if(start==NULL)
	{
		start=temp;
		return;
	}

	if(pos==1)
	{
		temp->setnext(start);
		start->setprev(temp);
		start=temp;
		return;
	}

	Node *p=start;
	int i=1;
	while(p->getnext()!=NULL)
	{
		if(i==pos-1)
		{
			temp->setnext(p->getnext());
			temp->getnext()->setprev(temp);
			p->setnext(temp);
			temp->setprev(p);
			return;
		}

		i++;
		p=p->getnext();
	}
	p->setnext(temp);
	temp->setprev(p);

}
	//void DeletePos(int)
ostream & operator<<(ostream & o,DLL& l)
{
	if(l.start==NULL)
	{
		cout<<"\nNo nodes\n";
		return o;
	}

	Node *p=l.start;
	cout<<"\n\nDLL : ";

	while(p!=NULL)
	{
		cout<<" "<<p->getdata();
		p=p->getnext();
	}
	return o;
}

void DLL::dis_rev()
{

	if(start==NULL)
	{
		cout<<"\nNo nodes\n";
		return ;
	}

	Node *p=start,*q=NULL;
	cout<<"\n\nReverse DLL : ";

	while(p!=NULL)
	{
		q=p;
		p=p->getnext();
	}

	while(q!=NULL)
	{
		cout<<" "<<q->getdata();
		q=q->getprev();

	}
	
}

void DLL::DeletePos(int pos)
{
	if(start==NULL)
	{
		cout<<"\n\nNo nodes to delete\n";
		return;
	}

	Node *p=start;
	if(pos==1)
	{
		start=start->getnext();
		if(start!=NULL)
			start->setprev(NULL);
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
			if(q->getnext()!=NULL)
				q->getnext()->setprev(p);
			delete q;
			return;


		}
		
		i++;
		p=p->getnext();
	}

}

DLL::~DLL()
{
	Node *p=start;
	while(start!=NULL)
	{
		delete p;
		start=start->getnext();
		
	}
}

void DLL::InsertSorted(int data)
{
	Node *temp=new Node(data);
	if(start==NULL)
	{
		start=temp;
		return;
	}

	if(temp->getdata()<start->getdata())
	{
		temp->setnext(start);
		start->setprev(temp);
		start=temp;
		return;
	}
	

	int i=1;
	Node *p=start;
	while(p->getnext()!=NULL)
	{
		if(p->getnext()->getdata()>temp->getdata())
		{
			temp->setnext(p->getnext());
			temp->getnext()->setprev(temp);
			p->setnext(temp);
			temp->setprev(p);
			return;
		}

		i++;
		p=p->getnext();
	}
	p->setnext(temp);
	
	temp->setprev(p);

}