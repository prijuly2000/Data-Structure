#include"BST.h"

void main()
{
	int ch,data;
	BST s;
	while(ch!=6)
	{
		cout<<"\n\n---BST---";
		cout<<"\n1.Insert";
		cout<<"\n2.Inorder";
		cout<<"\n3.Preorder";
		cout<<"\n4.postorder";
		cout<<"\n";
		cout<<"\n6.Exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"\nEnter the data:";
			cin>>data;
			s.insert(data);
			break;
		case 2:
			s.inorder(s.root);
			break;
		case 3:
			s.preorder(s.root);
			break;
		case 4:
			s.postorder(s.root);
			break;
		case 5:
			cout<<"\nEnter the data to delete:";
			cin>>data;
			s.Delete(data);
			break;

		}

	}
}