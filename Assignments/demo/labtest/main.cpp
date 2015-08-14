#include"LLL.h"

void main()
{
	int pos,ch=0;
	Student s;
	LLL l;

	while(ch!=6)
	{
		cout<<"\n\n---Student Linklist---";
		cout<<"\n1.display";
		cout<<"\n2.Insert At Position";
		cout<<"\n3.Delete At Position";
		cout<<"\n4.Write File";
		cout<<"\n5.Read File";
		cout<<"\n6.Exit";
		cout<<"\nEnter the choice";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<l;
			break;
		case 2:
			s.accept();
			cout<<"\nEnter the position :";
			cin>>pos;
			l.InsertPos(s,pos);
			break;
		case 3:
			cout<<"\nEnter the position :";
			cin>>pos;
			l.DeletePos(pos);
			break;
		case 4:
			l.Writefile();
			break;
		case 5:
			l.Readfile();
			break;

		}
	}	
	
}