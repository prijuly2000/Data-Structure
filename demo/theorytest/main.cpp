#include<iostream.h>

/*void main1()
{
	{
		for(int x=1;x<=5;x++,x+=5)

	}
	cout<<endl<<"value of x="<<x;
}*/
/*float cal(float value)
{
	return (3*value);
}
void main()
{
	int a=10;
	float b=cal("123");
}*/
/*char *buf1="genesis",*buf2="insoft";
void main4()
{
	char*q=buf1;
	*q='x';
	cout<<*q;
}*/
/*
class sample
{
	int i;
	sample()
	{
		cout<<" hi";
		i=0;
	}
public:
	
	
	int*ptr;
	sample(int i)
	{
		ptr = new int(i);
	}
	~sample()
	{
		delete ptr;
	}
	void printval()
	{
		cout<<*ptr;
}
};
void somefunction(sample x)
{
	cout<<"say i m in some fun"<<endl;
}

int main()
{
	sample s1;
 	//somefunction(s1);
	//s1.printval();
}

/*	class opoverload
	{
	public:
		bool operator==(opoverload temp);
	};
	bool opoverload::operator ==(opoverload temp)
	{
		if(*this==temp)
		{
			cout<<"the both r same objects\n";
			return true;
		}
		else{
			cout<<"diffrent";
			return false;
	}}
	void main()
	{
		opoverload a1,a2;
		a1==a2;
		}
	
*//*
	class complex
	{
		double re;
		double im;
	public:
		complex():re(1),im(0.5)
		{cout<<" "<<re<<" "<<im;}
		bool operator==(complex &rhs);
		operator int(){}
	};
	bool complex::operator ==(complex &rhs)
	{
		if((this->re == rhs.re)&&(this->im==rhs.im))
			return true;
		else 
			return false;

	}
	int main()
	{
		complex c1;
		cout<<c1;
	}*/
	

  /*  class test
	{
	public:

	virtual void disp1()
	{}
		
	};
	int main()
	{
		cout<<sizeof(test)<<endl;
		return 0;
	}
	*/

	class test
	{
		int p,*p1;
		char ch[5];
	//	public:

	//	virtual void disp1()=0;
		/*virtual void disp2()
		{
			cout<<"virtual";
		}*/
	};
	
		
	
	int main()
	{
		//int *p;
		//char ch[5];
		//cout<<"\n"<<sizeof(ch);
		cout<<"\n"<<sizeof(test)<<endl;
		return 0;
	}	