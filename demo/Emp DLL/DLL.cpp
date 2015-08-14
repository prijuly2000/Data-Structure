#include"DLL.h"

DLL::DLL()
{
	start=NULL;
}

void DLL::InsertPos(Emp & e,int pos)
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
			temp->setprev(p);
			p->setnext(temp);
			temp->getnext()->setprev(temp);
			return;
		}
		i++;
		p=p->getnext();
	}
	p->setnext(temp);
	temp->setprev(p);

}

void DLL::display()
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


void DLL::DeletePos(int pos)
{
	if(start==NULL)
	{
		cout<<"\no nodes\n";
		return;
	}

	Node *p=start;
	if(pos==1)
	{
		if(start->getnext()!=NULL)
		{
			start=start->getnext();
			start->setprev(NULL);
		}
		else
			start=NULL;
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