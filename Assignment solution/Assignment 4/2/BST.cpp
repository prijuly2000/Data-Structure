#include"BST.h"
#include<fstream.h>

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

void BST::writefile(Node *p)
{
	if(p!=NULL)
	{
		writefile(p->getleft());
		ofstream out;
		out.open("file.txt",ios::app);
		out<<" "<<p->getdata();
		out.close();
		writefile(p->getright());
	}
	
}

void BST::readfile()
{
	
	ifstream in;
	in.open("file.txt");
	
	int data;
	while(!in.eof())
	{
		in>>data;
		insert(data);
	}
	in.close();
	
	
	
}