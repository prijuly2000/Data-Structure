#include"graph.h"
///////////////////////////
Graph::Graph()
{
	start=NULL;
}
///////////////////////////
void Graph::Insert(int data)
{
	Node *temp=new Node(data);
	if(start=NULL)
	{
		start=temp;
		return;
	}
	Node *p=start;
	while(p->GetNext()!=NULL)
	{
		p=p->GetNext();
	}
	//attach the node at the end
	p->SetNext(temp);
	/////////////////////////////////Edges//////////////////
	p=start;
	while(p!=temp)
	{
		char ans;
		cout<<"\nIs there an edge from "<<p->GetData()<<" to "<< temp->GetData();
		cin>>ans;
		if(ans=='y' || ans=='Y')
		{
			Node *t=new Node(1);
			Node *q=p;
			while(q->GetLink()!=NULL)
			{
				q=q->GetLink();
			}
			q->SetLink(t);
			t->SetNext(temp);
		}

		cout<<"\nIs there an edge from "<<temp->GetData()<<" to "<<p->GetData();
		cin>>ans;
		if(ans=='y' || ans=='Y')
		{
			Node *t=new Node(1);
			Node *q=temp;
			while(q->GetLink()!=NULL)
			{
				q=q->GetLink();
			}
			q->SetLink(t);
			t->SetNext(p);
		}
		//Go for next node
		p=p->GetNext();
	}
}
///////////////////////////