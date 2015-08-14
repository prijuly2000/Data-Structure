#include"stack.h"
#define MAX 10

template<class T>
Stack<T>::Stack()
{
	top=-1;
}

template <class T>
bool Stack<T>::push(T x)
{
	if(!IsFull())
	{
		s[++top]=x;
		return true;
	}
	else
		return false;
}

template<class T>
bool Stack<T>::pop(T &p)
{
	
	if(!IsEmpty())
	{
		p=s[top--];
		return true;
	}
	else
		return false;
}

template<class T>
void Stack<T>::display()
{
	cout<<"\nStack values";
	for(int i=top;i>=0;i--)
		cout<<" "<<s[	i];
	cout<<endl;
}

template<class T>
bool Stack<T>::IsEmpty()
{
	if(top==-1)
		return true;
	else
		return false;

}

template<class T>
bool Stack<T>::IsFull()
{
	if(top==MAX-1)
		return true;
	else
		return false;
}