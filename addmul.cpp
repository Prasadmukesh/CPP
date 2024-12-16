#include<iostream>
using namespace std;
int main()
{
	// variable declaration and asigning data
	int x,y,res;
	cout<<"Enter number1 ";
	cin>>x;
	cout<<"Enter number2 ";
	cin>>y;
	
	cout<<"memory address of x "<<&x<<endl;
	cout<<"memory address of y "<<&y<<endl;
	cout<<"size of x "<<sizeof(x)<<"bytes"<<endl;
	cout<<"size of y "<<sizeof(y)<<"bytes"<<endl;
	
	cout<<"value of x "<<x<<"\n"<<"value of y"<<y<<endl;
	
	//Arithmetic operator
	
	res=x+y;
	cout<<"sum is "<<res<<endl;
	
	res=x-y;
	cout<<"diff is "<<res<<endl;
	res=x*y;
	cout<<"mul is "<<res<<endl;
	res=x/y;
	cout<<"div is "<<res<<endl;
	
	res=x%y;
	cout<<"mod is "<<res<<endl;
	
	
	return 0;
}