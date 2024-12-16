#include<iostream>
using namespace std;

int main()
{
	int	x,y,res;
	
	cout<<"Enter  number1 :";
	cin>>x;
	cout<<"Enter  number2 :";
	cin>>y;
	cout<<"size of x "<<sizeof(x)<<endl;
	cout<<"size of y "<<sizeof(y)<<endl;
	cout<<"memory address x: "<<&x<<endl;
	cout<<"memory address  y: "<<&y<<endl;
	res=x+y;
	cout<<"sum is "<<res;
}

