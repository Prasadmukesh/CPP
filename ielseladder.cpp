//if else if ladder
#include<iostream>
using namespace std;
int main(){
	
	int marks;
	string grade;
	char name[16];
	bool ispaid=true;
	cout<<"Enter Name :";
	cin>>name;
	cout<<"Enter Marks :";
	cin>>marks;
	if(marks>=90){
		grade="A+";
	}
	else if(marks>=80 and marks<90)
	{
		grade="A";	
	}
	else if(marks>=70 and marks<80)
	{
		grade="B+";	
	}
	else if(marks>=60 and marks<70)
	{
		grade="B";	
	}
	else if(marks>=50 and marks<60)
	{
		grade="C";	
	}
	else if(marks>=40 and marks<50)
	{
		grade="D";	
	}
	else
	{
		grade="F";	
	}
	cout<<"Name :"<<name<<endl;
	cout<<"Marks "<<marks<<"\n"<<"Grade "<<grade<<endl;
	
	return 0;
}