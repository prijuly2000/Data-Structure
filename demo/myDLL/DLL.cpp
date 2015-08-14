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

	int i=1;
	Node *p=start;

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
	temp->setprev(p);
	p->setnext(temp);

}

void DLL::DeletePos(int pos)
{
	if(start==NULL)
	{
		cout<<"\nNo nodes\n";
		return;
	}

	if(pos==1)
	{
		if(start->getnext()==NULL)
		{
			delete start;
			start=NULL;
		}
		else
		{
			start=start->getnext();
			delete start->getprev();
			start->setprev(NULL);
		}
		return ;
	}

	Node *p=start;
	int i=1;
	while(p!=NULL)
	{
		if(i==pos)
		{
			p->getprev()->setnext(p->getnext());
			if(p->getnext()!=NULL)
			{
				p->getnext()->setprev(p->getprev());
			}
			delete p;
			return;
		}
		i++;
		p=p->getnext();
	}
}

void DLL::display()
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

DLL::~DLL()
{
	Node *temp;
	while(start!=NULL)
	{
		temp=start;
		start=start->getnext();
		delete temp;
	}
}

