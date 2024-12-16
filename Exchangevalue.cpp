#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter any two numbers :"<<endl;
	cin>>n1>>n2;
	cout<<"\n You have entered numbers "<<endl;
	cout<<n1<<"\t"<<n2;
	//logic 
	int t=n1;
	n1=n2;
	n2=t;
	cout<<"\n You have entered numbers "<<endl;
	cout<<n1<<"\t"<<n2;
	
	return 0;
}