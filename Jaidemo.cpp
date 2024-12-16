#include<iostream>
using namespace std;
int main()
{
	int id=101;
	string name="jaya";
	char gender='F';
	string title;
	int a=1234;
	int b=4567;
	
	cout<<"Hello world!"<<endl;
	
	if (gender=='M')
	{
		title="Mr.";
	}
	else
	{
			title="Ms.";
	}
	cout<<"id:"<<id<<"\nname :"<<title<<" "<<name<<"\nGender:"<<gender<<endl;
	
	int s=a+b;
	cout<<"sum is "<<s;
	return 0;
}