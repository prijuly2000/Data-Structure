#include"sorting.h"

void main()
{
	int ch=0;

	sort s;
	while(ch!=7)
	{
		cout<<"\n1.Accept";
		cout<<"\n2.Bubble";
		cout<<"\n3.selection";
		cout<<"\n4.insertion";
		cout<<"\n5.merge sort";
		cout<<"\n7.Exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			s.accept();
			break;
		case 2:
			s.bubble();
			s.display();
			break;
		case 3:
			s.selection();
			s.display();
			break;
		case 4:
			s.insertion();
			s.display();
			break;
		case 5:
			s.mergesort(s.s,0,4);
			s.display();
			break;
		case 6:
			s.quick(s.s,0,4);
			s.display();
			break;

		}
	}
}