#include"stack.h"

void main()
{
	int x=0;
	Stack st;
	for(int i=0;i<4;i++)
		st.push(i*10);
	st.display();
	st.pop(x);
	cout<<"\nPoped="<<x<<endl;
	st.peek(x);
	cout<<endl<<"\nPeek="<<x<<endl;
	st.display();
}