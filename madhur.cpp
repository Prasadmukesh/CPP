#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int max;
	cout<<"Hello Madhur!"<<endl;
	cout<<"Enter any two number"<<endl;
	cin>>a>>b;
	
	int c=a+b;
	
	cout<<"Sum is "<<c<<endl;
	
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	cout<<"Highest value is :"<<max;
	
	return 0;
	
}