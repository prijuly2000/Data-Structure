#include"graph.h"

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
	while(p->getnext()!=NULL)
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
			Node *t=new Node(1);
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
			Node *t=new Node(1);
			Node *q=temp;
			while(q->getlink()!=NULL)
			{
				q=q->getlink();
				
			}
			//go for next node
			q->setlink(t);
			t->setnext(p);
			
		}
		p=p->getnext();
	}		
		
}

void Graph::dfs()
{
	cout<<"\nDFS : ";
	if(start==NULL)
	{
		cout<<"\nNo nodes\n";
		return;
	}

	Node *p=start;
	while(p!=NULL)
	{
		p->setstatus(1);
		p=p->getnext();
	}

	p=start;
	Node *stack[10];
	int top=-1;

	stack[++top]=p;
	p->setstatus(2);

	while(top!=-1)
	{
		p=stack[top--];
		p->setstatus(3);
		cout<<" "<<p->getdata();
		Node *q=p->getlink();
		while(q!=NULL)
		{
			if(q->getnext()->getstatus()==1)
			{
				stack[++top]=q->getnext();
				q->getnext()->setstatus(2);
			}
			q=q->getlink();
		}
	}

}

void Graph::bfs()
{
	cout<<"\nBFS : ";
	if(start==NULL)
	{
		cout<<"\nNo nodes\n";
		return;
	}

	Node *p=start;
	while(p!=NULL)
	{
		p->setstatus(1);
		p=p->getnext();
	}

	p=start;
	Node *stack[10];
	int f=0,r=0;

	stack[r]=p;
	
	p->setstatus(2);

	while(f<=r)
	{
		p=stack[f++];
		p->setstatus(3);
		cout<<" "<<p->getdata();
		Node *q=p->getlink();
		while(q!=NULL)
		{
			if(q->getnext()->getstatus()==1)
			{
				stack[++r]=q->getnext();
				q->getnext()->setstatus(2);
			}
			q=q->getlink();
		}
	}

}


