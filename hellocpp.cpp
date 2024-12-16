#include<iostream>
using namespace std;
int main()
{
	string title,name;
	int num;
	float sal;
	char gender;
	
	
	
	// input data reading data from user
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Enter your id:";
	cin>>num;
	cout<<"Enter your salary:";
	cin>>sal;
	cout<<"Enter your gender:";
	cin>>gender;
	if(gender=='m' || gender=='M')
	{
		title="Mr. ";
	}
	else
	{
		title="Mrs.";
	}
	
	//Printing data
	cout<<"Hello cpp"<<endl;
	cout<<"Name:"<<title<<name<<"\n";
	cout<<"Num is :"<<num<<endl;
	cout<<"Salary is Rs. :"<<sal<<endl;
	cout<<"Gender :"<<gender<<endl;
	cout<<title<<name<<"\t"<<num<<"\t"<<sal<<"\t"<<gender<<endl;
	
	cout<<sizeof(int)<<sizeof(float)<<sizeof(char)<<sizeof(double)<<endl;
	

	
	return 0;
}