#include"dll.h"

void main()
{
	Dlink l;
	
	int ch,x,pos;
	do
	{
		cout<<"1.Insert Beg\n2.Insert End\n3.Insert Pos\n4.Delete Beg\n5.Delete End\n6.Delete pos\n7.Display\n0.EXIT \nEnter Choice =: ";
		cin>>ch;

		switch(ch)
		{
		case 1 :
			cout<<"Enter the element ";
			cin>>x;
			l.InsetBeg(x);
			break;
		case 2 :
			cout<<"Enter the element ";
			cin>>x;
			l.InsertEnd(x);
			break;

		case 3 :
			cout<<"Enter the element ";
			cin>>x;
			cout<<"enter the position ";
			cin>>pos;
			l.InsertPos(x,pos);
			break;
		
		case 4:
			l.DeleteBeg();
			break;

		case 5:
			l.DeleteEnd();
			break; 
		case 6:
		
			cout<<"Enter the position to delete ";
			cin>>pos;
			l.DeletePos(pos);
			break; 

		case 7:
			l.Display();
			break;
}
	}while(ch!=0);
}