#include"BST.h"
#include<fstream.h>
void main()
{
	int ch,data;
	BST s;
	ofstream out;
	while(ch!=5)
	{
		cout<<"\n\n---BST---";
		cout<<"\n1.Insert";
		cout<<"\n2.Inorder";
		cout<<"\n3.Write file";
		cout<<"\n4.read file";
		cout<<"\n5.Exit";
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
			out.open("file.txt");
			out.close();			
			s.writefile(s.root);
			break;
		case 4:
			s.readfile();
			break;
	

		}

	}
}