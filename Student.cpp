#include<iostream>
using namespace std;
class student
{
	public:	int regno=101;
	string name="parth sharma";
	float marks=66.99;
 	void Show()
	{
		cout<<"student details "<<regno<<"\t"<<name<<"\t"<<marks<<endl;
	}
	void getdata(int regno,string name,float marks)
	{
		this->regno=regno;
		this->name=name;
		this->marks=marks;
	}
	void Userinput()
	{
		cout<<"enter your regno:"<<endl;
		cin>>regno;
		cout<<"enter your name:"<<endl;
		cin>>name;
		cout<<"enter your marks:"<<endl;
		cin>>marks;
	}
};
int main()
{
	student s1,s2,s3;
	s1.Show();
	//By reference
	s2.regno=122;
	s2.name="sajan";
	s2.marks=77.00;
	s2.Show();
	s3.getdata(106,"Harsh",56.00);
	s3.Show();
	s1.Userinput();
	s1.Show();
	return 0;
	
}