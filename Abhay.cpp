#include<iostream>
using namespace std;
int main()
{
	string name;
	
	int l,b
	int area,p;
	
	
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Hello "<<name<<endl;
	cout<<"How Are You?";
	cout<<"\nEnter length and breath of rectangle:";
	cin>>l>>b;
	area=l*b;
	p=2*(l+b);
	
	cout<<"Area is "<<area<<endl;
	cout<<"Perimeter is "<<p;
	
	return 0;
}