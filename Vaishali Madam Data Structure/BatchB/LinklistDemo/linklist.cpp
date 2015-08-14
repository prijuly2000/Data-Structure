#include"linklist.h"
/////////////////////////////////////////
Linklist::Linklist()
{
	start=NULL;
}
/////////////////////////////////////////
void Linklist::InsertBeg(int data)
{
	//Create a new node
	Node *temp=new Node(data);
	temp->SetNext(start);
	start=temp;
}
/////////////////////////////////////////
void Linklist::Display()
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to display";
		return;
	}
	Node *p=start;
	while(p!=NULL)
	{
		cout<<"\t"<<p->GetData();
		p=p->GetNext();
	}
}
/////////////////////////////////////////
void Linklist::InsertEnd(int data)
{
	Node *temp=new Node(data);
	if(start==NULL)
	{
		start=temp;
		return;
	}
	Node *p=start;
	while(p->GetNext())
	{
		p=p->GetNext();
	}
	p->SetNext(temp);
}
////////////////////////////////////////
void Linklist::InsertPos(int data,int pos)
{
	Node *temp=new Node(data);
	//Insert at beginning
	if(start==NULL || pos==1)
	{
		temp->SetNext(start);
		start=temp;
		return;
	}
	Node *p=start; //To traverse
	int i=1; //to keep a track of position
	//Check if we have reached to last node
	while(p->GetNext()!=NULL)
	{
		//Are we at right position
		if(i==pos-1)
		{
			//Attach the new node first
			temp->SetNext(p->GetNext());
			p->SetNext(temp);
			return;
		}
		i++;
		p=p->GetNext();//Move to next node
	}
	//At end
	p->SetNext(temp);
}
////////////////////////////////////////
void Linklist::DeleteBeg()
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to delete";
		return;
	}
	Node *p=start;
	start=start->GetNext();
	cout<<"\n"<<p->GetData()<<" is deleted";
	delete p;
}
////////////////////////////////////////
void Linklist::DeleteEnd()
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to delete";
		return;
	}
	Node *p=start;
	if(p->GetNext()==NULL)
	{
		start=NULL;
		cout<<"\n"<<p->GetData()<<" is deleted";
		delete p;
		return;
	}
	while(p->GetNext()->GetNext()!=NULL)
	{
		p=p->GetNext();
	}

	cout<<"\n"<<p->GetNext()->GetData()<<" is deleted";
	delete p->GetNext();
	p->SetNext(NULL);
}
////////////////////////////////////////
void Linklist::DeletePos(int pos)
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to delete";
		return;
	}
	Node *p=start;
	if(pos==1)
	{
		start = start->GetNext();
		cout<<"\n"<<p->GetData()<<" is deleted";
		delete p;
		return;
	}
	int i=1;
	while(p->GetNext()!=NULL)
	{
		if(i==pos-1)
		{
			Node *q=p->GetNext();
			p->SetNext(q->GetNext());
			cout<<"\n"<<q->GetData()<<" is deleted";
			delete q;
			return;
		}
		i++;
		p=p->GetNext();
	}
	cout<<"\nInvalid position";
}
////////////////////////////////////////