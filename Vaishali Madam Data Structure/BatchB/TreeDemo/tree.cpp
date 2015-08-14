#include"tree.h"
///////////////////////////////////////
Tree::Tree()
{
	root = NULL;
}
///////////////////////////////////////
void Tree::Insert(int data)
{
	Node *temp=new Node(data);
	if(root == NULL)
	{
		root = temp;
		return;
	}
	Node *p=root,*parent=NULL;
	while(p!=NULL)
	{
		if(data == p->GetData())
		{
			cout<<"\nData already present";
			delete temp;
			return;
		}
		parent = p;
		if(data<p->GetData())
		{
			p=p->GetLeft();
		}
		else
		{
			p=p->GetRight();
		}
	}
	if(data < parent->GetData())
	{
		parent->SetLeft(temp);
	}
	else
	{
		parent->SetRight(temp);
	}
}
///////////////////////////////////////
void Tree::Inorder(Node *p)
{
	if(p!=NULL)
	{
		Inorder(p->GetLeft());
		cout<<"\t"<<p->GetData();
		Inorder(p->GetRight());
	}
}
///////////////////////////////////////
void Tree::Preorder(Node *p)
{
	if(p!=NULL)
	{
		cout<<"\t"<<p->GetData();
		Preorder(p->GetLeft());		
		Preorder(p->GetRight());
	}
}
///////////////////////////////////////
void Tree::Postorder(Node *p)
{
	if(p!=NULL)
	{		
		Postorder(p->GetLeft());		
		Postorder(p->GetRight());
		cout<<"\t"<<p->GetData();
	}
}
///////////////////////////////////////
void Tree::Inorder()
{
	if(root==NULL)
	{
		cout<<"\nNo nodes to display";
		return;
	}
	Inorder(root);
}
///////////////////////////////////////
void Tree::Preorder()
{
	if(root==NULL)
	{
		cout<<"\nNo nodes to display";
		return;
	}
	Preorder(root);
}
///////////////////////////////////////
void Tree::Postorder()
{
	if(root==NULL)
	{
		cout<<"\nNo nodes to display";
		return;
	}
	Postorder(root);
}
///////////////////////////////////////
void Tree::Delete(int data)
{
	if(root == NULL)
	{
		cout<<"\nNo nodes to delete";
		return;
	}
	Node *p=root,*parent=NULL;
	while(p!=NULL)
	{
		if(data == p->GetData())
		{
			break;
		}
		parent=p;
		if(data<p->GetData())
		{
			p=p->GetLeft();
		}
		else
		{
			p=p->GetRight();
		}
	}
	if(p==NULL)
	{
		cout<<"\nData not present";
		return;
	}
	//Left and Right both are not null
	if(p->GetLeft() != NULL  && p->GetRight()!=NULL)
	{
		parent = p;
		Node *xsucc = p->GetRight();
		while(xsucc->GetLeft()!=NULL)
		{
			parent = xsucc;
			xsucc= xsucc->GetLeft();
		}
		p->SetData(xsucc	->GetData());
		p=xsucc;
	}
	if(p->GetLeft()==NULL && p->GetRight()==NULL)
	{
		if(p==root)
		{
			root=NULL;
		}
		else
		{
			if(data < parent->GetData())
			{
				parent->SetLeft(NULL);
			}
			else
			{
				parent->SetRight(NULL);
			}
		}
		delete p;
		return;
	}
	if(p->GetLeft()!=NULL && p->GetRight()==NULL)
	{
		if(p==root)
		{
			root=p->GetLeft();
		}
		else
		{
			if(data < parent->GetData())
			{
				parent->SetLeft(p->GetLeft());
			}
			else
			{
				parent->SetRight(p->GetLeft());
			}
		}
		delete p;
		return;
	}
	if(p->GetLeft()==NULL && p->GetRight()!=NULL)
	{
		if(p==root)
		{
			root=p->GetRight();
		}
		else
		{
			if(data < parent->GetData())
			{
				parent->SetLeft(p->GetRight());
			}
			else
			{
				parent->SetRight(p->GetRight());
			}
		}
		delete p;
		return;
	}
}

