#include"cll.h"
///////////////////////////////
void main()
{
	CLL l;
	int iChoice=0,ele,pos;
	while(iChoice!=4)
	{
		cout<<"\n\t\t1.Insert at position";
		cout<<"\n\t\t2.Delete at position";
		cout<<"\n\t\t3.Display";		
		cout<<"\n\t\t4.Exit";

		cout<<"\nEnter your choice";
		cin>>iChoice;
		switch(iChoice)
		{
		case 1:
			cout<<"\nEnter element to insert and position";
			cin>>ele>>pos;
			l.InsertPos(ele,pos);
			break;
		case 2:
			cout<<"\nEnter element to position";
			cin>>pos;			
			l.DeletePos(pos);
			break;
		case 3:
			 l.Display();
			 break;
		case 4:
			break;
		default:
			cout<<"please enter a valid choice"<<endl;
			break;
		}

	}

}