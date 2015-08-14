#include<iostream.h>

class sort
{
	
public:
	int s[5];
	sort();
	void accept();
	void bubble();
	void display();
	void selection();
	void insertion();
	void mergesort(int s[],int l,int r);
	void merge(int a[],int l,int rbeg,int r);
	void quick(int a[],int l,int r);
	
	
};