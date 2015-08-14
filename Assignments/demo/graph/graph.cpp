#include"Graph.h"

Graph::Graph()
{
	start=NULL;

}
void Graph::insert(int data)
{
	Node *temp=new Node(data);
	if(start==NULL)
	{
		start=temp;
		return;
	}
	Node *p=start;
	while(p->getnext!=NULL)
	{
		p=p->getnext();
	}
	p->setnext(temp);
	p=start;
	while(p!=temp)
	{
		char ans;
		cout<<"Is there an edge from"<<p->getdata()<<"to"<<temp->getdata();
		cin>>ans;
		if(ans=='y' ||ans =='Y')
		{
			Node *t=new Node(6);
			Node *q=p;
			while(q->getlink()!=NULL)
			{
				q=q->getlink();
			}
			q->setlink(t);
			t->setnext(temp);

		}
		cout<<"\nIs there an edge from"<<temp->getdata()<<"to"<<p->getdata();
		cin>>ans;
		if(ans=='y'||ans=='Y')
		{
			Node *t=new Node(5);
			Node *q=temp;
			while(q->getlink()!=NULL)
			{
				q=q->getlink();
				
			}
			//go for next node
			q->setlink(t);
			t->setnext(p);
			p=p->getnext();
		}
	}		
		
}


