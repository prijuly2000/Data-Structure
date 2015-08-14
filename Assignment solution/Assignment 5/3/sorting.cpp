#include"sorting.h"

sort::sort()
{
	for(int i=0;i<5;i++)
		s[i]=0;
}

void sort::accept()
{
	cout<<"\nEnter the data:";
	for(int i=0;i<5;i++)
		cin>>s[i];
	for(i=0;i<5;i++)
		cout<<s[i];
}

void sort::display()
{
	cout<<"\nSorted data:";
	for(int i=0;i<5;i++)
		cout<<s[i];

}

void sort::bubble()
{

	int j,temp;
	for(int i=4;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}

}

void sort::selection()
{
	int min,temp,j,i,index;
	for( j=0;j<4;j++)
	{
		min=s[j];
		index=j;
		for(i=j+1;i<5;i++)
		{
			if(min>s[i])
			{
				min=s[i];
				index=i;
			}
		}
		temp=s[j];
		s[j]=s[index];
		s[index]=temp;
	}
}

void sort::insertion()
{
	int i,j,temp;
	for(i=0;i<4;i++)
	{
		j=i;
		temp=s[j+1];
		while(temp<s[j] && j>=0)
		{
			s[j+1]=s[j];
			j--;
		}
		s[j+1]=temp;
    
	}

}

void sort::mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,mid+1,r);
	}
}

void sort::merge(int a[],int l,int rbeg,int r)
{
	int lend=rbeg-1,ltemp=l,k=l;
	int c[5];
	while(l<=lend && rbeg<=r)
	{
		if(a[l]<a[rbeg])
		{
			c[k++]=a[l++];
		}
		else
		{
			c[k++]=a[rbeg++];
		}
	}

	while(l<=lend)
	{
		c[k++]=a[l++];
	}

	while(rbeg<=r)
	{
		c[k++]=a[rbeg++];
	}

	for(int i=ltemp;i<=r;i++)
	{
		a[i]=c[i];
	}
	
}

void sort::quick(int a[],int l,int r)
{
	int ltemp=l,rtemp=r;
	int pivot=a[l];
	while(l<r)
	{
		while(pivot<a[r] && l<r)
		{
			r--;
		}

		if(l<r)
		{
			a[l]=a[r];
			l++;
		}

		while(pivot>a[l] && l<r)
		{
			l++;
		}

		if(l<r)
		{
			a[r]=a[l];
			r--;
		}
	}

	a[l]=pivot;
	if(ltemp<l-1)
	{
		quick(a,ltemp,l-1);
	}

	if(r+1<rtemp)
	{
		quick(a,r+1,rtemp);
	}
}

