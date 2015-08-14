#include"Queue.h"

void main()
{
	int x=0;
	Queue q1;
	for(int i=0;i<4;i++)
		q1.push(i*10);
	
	q1.display();
	
	q1.pop(x);
	cout<<"\nPoped="<<x<<endl;
	q1.display();

}