#include"tree.h"
void main()
{
	Tree t;
	int ch=0,x;
	while(ch!=6)
	{
		cout<<"\n\n----Tree----\n";
		cout<<"\n1.Inorder";
		cout<<"\n2.Preorder";
		cout<<"\n3.Postorder";
		cout<<"\n4.Insert";
		cout<<"\n5.Delete";
		cout<<"\n6.Exit";
		cout<<"\nEnter the choice :";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"\nInorder  : ";
			t.Inorder();
			break;

		case 2:
			cout<<"\nPreorder :";
			t.Preorder();
			break;
		case 3:
			cout<<"\nPostorder:";
			t.Postorder();
			break;
		case 4:
			cout<<"\nEnter the data:";
			cin>>x;
			t.Insert(x);
			break;
		case 5:
			cout<<"\nEnter the data:";
			cin>>x;
			t.Delete(x);
			break;
		}
	}
	
	

}