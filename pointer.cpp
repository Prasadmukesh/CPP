#include<iostream>
using namespace std;

void update(int &value)
{
	value+=10;
	cout<<"New Value is "<<value;
	
}

void Swap(int &a, int &b)
{
	int t=a;
	a=b;
	b=t;
	
}

int main()
{
	int num=100;
	int x=10;
	int y=20;

	
	update(num);
	
	cout<<"\nValue of Num is "<<num;
	
	
	Swap(x,y);
	
	cout<<"Value of x "<<x<<"\n"<<"value of y "<<y;
}