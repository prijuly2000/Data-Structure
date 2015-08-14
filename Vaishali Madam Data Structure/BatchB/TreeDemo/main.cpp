#include"tree.h"
///////////////////////////////////
void main()
{
	Tree t;
	int data,iChoice=0;
	while(iChoice!=5)
	{
		cout<<"\n\t\t1.Insert";
		cout<<"\n\t\t2.Inorder";
		cout<<"\n\t\t3.Preorder";
		cout<<"\n\t\t4.Postorder";
		cout<<"\n\t\t5.Exit";
		cout<<"\nEnter your choice";
		cin>>iChoice;
		switch(iChoice)
		{
		case 1:
				cout<<"\nEnter data to push";
				cin>>data;
				t.Insert(data);
				break;
		case 2:
			t.Inorder();
			break;
		case 3:
			t.Preorder();
			break;
		case 4:
			t.Postorder();
			break;
		case 5:
			break;
		default:
			cout<<"\nInvalid choice";
		}
	}
}