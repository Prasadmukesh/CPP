#include<iostream>
using namespace std;
int main()
{
	string text;
	int a=900;
	int b=800;
	cout<<"Enter a text:";
	cin>>text;
	cout<<"Hello "<<text<<endl;
	cout<<"a="<<a<<"\n"<<"b="<<b<<endl;
	
	int max=(a>b)?a:b;
	
	cout<<"Highest value is "<<max;
	
	
	return 0;
}