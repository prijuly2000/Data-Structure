#include"stack.cpp"

void main()
{
	double  x=0;
	Stack<double> st;
	for(int i=0;i<4;i++)
		st.push(i*1.1);
	st.display();
	st.pop(x);
	cout<<"\nPoped="<<x<<endl;
	st.display();
}