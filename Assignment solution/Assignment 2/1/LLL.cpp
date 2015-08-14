#include"LLL.h"

LLL::LLL()
{
	start=NULL;
}

void LLL::InsertBeg(int data)
{
	Node *temp=new Node(data);
	temp->setnext(start);
	start=temp;
}

//InsertEnd();
void LLL::display()
{
	cout<<"\nLinklist : ";
	if(start!=NULL)
	{
		Node *p=start;
		while(p!=NULL)
		{
			cout<<" "<<p->getdata();
			p=p->getnext();
		}

	}
	else
	{
		cout<<"No nodes";
	}
}

void LLL::InsertEnd(int data)
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

void LLL::InsertPos(int data,int pos)
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

void LLL::DeleteBeg()
{
	if(start==NULL )
	{
		cout<<"Sory no nodes";
		return;
	}

	Node *temp=start;
	start=start->getnext();
	delete temp;
	cout<<"\nFirst deleted\n";
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

void LLL::DeleteEnd()
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to delete\n";
		return;
	}

	if(start->getnext()==NULL)
	{
		delete start;
		start=NULL;
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

void LLL::DeletePos(int pos)
{
	if(start==NULL)
	{
		cout<<"\nNo nodes to delete\n";
		return;
	}

	Node *p=start;
	int i=1;
	while(p->getnext()->getnext()!=NULL)
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

void LLL::reverse()
{
	if(start==NULL || start->getnext()==NULL)
	{
		return;
	}

	Node *p=start->getnext();
	start->setnext(NULL);
	Node *q=p->getnext();

	while(1)
	{
		p->setnext(start);
		start=p;
		p=q;
		if(p==NULL)
			break;
		q=q->getnext();
	}
}

void LLL::dis_reverse(Node *p)
{
	if(p==NULL)
		return;
	dis_reverse(p->getnext());
	cout<<" "<<p->getdata();
}

Node *LLL::getstart()
{
	return start;
}

ostream & operator<<(ostream &o,LLL &l)
{
	cout<<"\nLinklist : ";
	if(l.start!=NULL)
	{
		Node *p=l.start;
		while(p!=NULL)
		{
			cout<<" "<<p->getdata();
			p=p->getnext();
		}

	}
	else
	{
		cout<<"No nodes";
	}

	return o;
}

void LLL::InsertSort(int data)
{
	Node *temp=new Node(data);
	if(start==NULL || temp->getdata()<start->getdata())
	{
		temp->setnext(start);
		start=temp;
		return;
	}

	Node *p=start;

	while(p->getnext()!=NULL)
	{
		if(p->getnext()->getdata()>temp->getdata())
		{			
			temp->setnext(p->getnext());
			p->setnext(temp);
			return;
		}
		p=p->getnext();
	}
	p->setnext(temp);

}