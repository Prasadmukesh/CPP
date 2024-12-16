#include<iostream>
using namespace std;
int main()
{
	// variable declaration and asigning data
	string name="";
	int age=19;
	char gender='M';
	float salary=18000.00;
	cout<<"Enter your name :";  // user input
	cin>>name;
	cout<<"hello "<<name<<endl;
	cout<<age<<"\t"<<gender<<"\t"<<salary<<endl;
	
	return 0;
}