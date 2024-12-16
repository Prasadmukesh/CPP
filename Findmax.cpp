#include<iostream>
using namespace std;

int Findmax(int a,int b)
{
	int m=(a>b)?a:b;
//	if (a>b)
//	{
//		m=a;
//		
//	}
//	else
//	{
//		m=b;
//	}
	
	return m;
}

int Add(int a,int b)
{
	return a+b;
}
int Sub(int a,int b)
{
	return a-b;
}
int Mul(int a,int b)
{
	return a*b;
}
int Div(int a,int b)
{
	return a/b;
}
int Mod(int a,int b)
{
	return a%b;
}
int Gcd(int a,int b)
{
	int hcf;
	for(int k=1;k<=a && k<=b;k++)
	{
		if(a%k==0 && b%k==0)
		{
			hcf=k;
		}
	}
	
	return hcf;
}
int Lcm(int a,int b)
{
	int hcf,lcm;
	for(int k=1;k<=a && k<=b;k++)
	{
		if(a%k==0 && b%k==0)
		{
			hcf=k;
		}
	}
	
	lcm=(a*b)/hcf;
	return lcm;
}


int main()
{
	int x,y;
	cout<<"Enter value of x :";
	cin>>x;
	cout<<"Enter value of y :";
	cin>>y;
	
	int r=Findmax(x,y);
	
	cout<<"Highest value is "<<r<<endl;
	
	int r1=Gcd(x,y);
	cout<<"GCD :"<<r1<<endl;
	
	int r2=Lcm(x,y);
	cout<<"Lcm :"<<r2<<endl;
	
	
}