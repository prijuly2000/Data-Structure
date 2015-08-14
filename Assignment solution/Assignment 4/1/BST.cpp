#include"BST.h"

void BST::insert(int data)
{
 	Node *temp=new Node(data);
	if(root==NULL)
	{
		root=temp;
		return;
	}

	Node *p=root,*parent=NULL;

	while(p!=NULL)
	{
		parent=p;
		if(data==p->getdata())
		{
			cout<<"\nDuplicate\n";
			delete temp;
			return;
		}

		if(data<p->getdata())
		{
			p=p->getleft();
		}
		else
		{
			p=p->getright();
		}
	}

	if(data<parent->getdata())
	{
		parent->setleft(temp);
	}
	else
	{
		parent->setright(temp);
	}
	
}

void BST::inorder(Node *p)
{
	if(p!=NULL)
	{
		inorder(p->getleft());
		cout<<" "<<p->getdata();
		inorder(p->getright());
	}
	
}

void BST::preorder(Node *p)
{
	if(p!=NULL)
	{
		cout<<" "<<p->getdata();
		preorder(p->getleft());
		preorder(p->getright());
	}
	
}

void BST::postorder(Node *p)
{
	if(p!=NULL)
	{
		preorder(p->getleft());
		preorder(p->getright());
		cout<<" "<<p->getdata();
	}
	
}

void BST::Delete(int data)
{
	if(root==NULL)
	{
		cout<<"\nNo nodes\n";
		return;
	}

	Node *p=root,*parent=NULL;

	while(p!=NULL)
	{
		if(p->getdata()==data)
			break;

		parent=p;
		if(data<p->getdata())
			p=p->getleft();
		else
			p=p->getright();

	}

	if(p==NULL)
	{
		cout<<"\nData not present\n";
		return;
	}

	if(p->getleft()!=NULL &&p->getright()!=NULL)
	{
		parent=p;
		Node *xsuc=p->getright();
		while(xsuc->getleft()!=NULL)
		{
			parent=xsuc;
			xsuc=xsuc->getleft();
		}
			p->setdata(xsuc->getdata());
			p=xsuc;
		
	}

	if(p->getleft()==NULL && p->getright()==NULL)
	{
		if(p==root)
			root=NULL;
		else
		{
			if(p==parent->getleft())
				parent->setleft(NULL);
			else
				parent->setright(NULL);
		}
		delete p;
		return;

	}

	if(p->getleft()!=NULL && p->getright()==NULL)
	{
		if(p==root)
			root=p->getleft();
		else
		{
			if(p==parent->getleft())
				parent->setleft(p->getleft());
			else
				parent->setright(p->getleft());
		}
		delete p;
		return;

	}

	if(p->getleft()==NULL && p->getright()!=NULL)
	{
		if(p==root)
			root=p->getright();
		else
		{
			if(p==parent->getleft())
				parent->setleft(p->getright());
			else
				parent->setright(p->getright());
		}
		delete p;
		return;

	}

}
