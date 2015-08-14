#include"tree.h"

Tree::Tree()
{
	root=NULL;
}




void Tree::Insert(int data)
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

void Tree::Inorder()
{
	Inorder(root);
}

void Tree::Inorder(Node *p)
{
	if(p!=NULL)
	{
		Inorder(p->getleft());
		cout<<" "<<p->getdata();
		Inorder(p->getright());
	}
}

void Tree::Preorder()
{
	Preorder(root);
}

void Tree::Preorder(Node *p)
{
	if(p!=NULL)
	{
		cout<<" "<<p->getdata();
		Preorder(p->getleft());		
		Preorder(p->getright());
	}
}

void Tree::Postorder()
{
	Postorder(root);
}

void Tree::Postorder(Node *p)
{
	if(p!=NULL)
	{		
		Postorder(p->getleft());		
		Postorder(p->getright());
		cout<<" "<<p->getdata();
	}
}

void Tree::Delete(int data)
{
	if(root==NULL)
	{
		cout<<"no nodes";
		return;
	}
	Node*p=root,*parent=NULL;

	while(p!=NULL)
	{
		if(p->getdata()==data)
		{
			break;
		}
		parent=p;
		if(data<p->getdata())
		{
			p=p->getleft();
		}
		else
		{
			p=p->getright();
		}
	}

	if(p==NULL)
	{
		cout<<"data not found";
		return;
	}
	if(p->getleft()!=NULL ||p->getright()!=NULL)
	{
		parent=p;
		Node *xsuc=p->getright();
		while(xsuc->getleft()!=NULL)
		{
			parent=xsuc;
			xsuc=xsuc->getleft();
			p->setdata(xsuc->getdata());
			p=xsuc;

		}
		
	}
	if(p->getleft()==NULL ||p->getright()==NULL)
	{
		if(p==root)
		{
			root=NULL;
		}
		else
		{
			if(p==parent->getleft())
			//if(data<parent->getdata())
			{
				parent->setleft(NULL);

			}
			else
			{
				parent->setright(NULL);
			}
		}
		delete p;
		return;
	}

	if(p->getleft()!=NULL ||p->getright()==NULL)
	{
		if(p==root)
		{
			root=p->getleft();
		}
		else
		{
			if(p==parent->getleft())
			//if(data<parent->getdata())
			
			{
				parent->setleft(p->getleft());

			}
			else
			{
				parent->setright(p->getleft());

			}
		}
		delete p;
		return;

	}

	if(p->getleft()==NULL ||p->getright()!=NULL)
	{
		if(p==root)
		{
			root=p->getright();
		}
		else
		{
			if(p==parent->getleft())
			//if(data<parent->getdata())
			{
				parent->setleft(p->getright());

			}
			else
			{
				parent->setright(p->getright());

			}
		}
		delete p;
		return;

	}

	


}