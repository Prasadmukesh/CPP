#include<iostream>
using namespace std;
class Student
{
	// instance variable
	int regno;
	string name;
	float marks;
	struct dob{
		int dd;
		string mon;
		int year;
	}d;
	static string course;
public:	static void changecourse(string c)
	{
		course=c;
	}
	static int count;
	
 	public:Student()  // default contructotr
 	{
 		regno=100;
 		name="john";
 		marks=0.00;
 		count++;
	 }
	 Student(int regno,string name,float marks) //parameterized constructor
	 {
	 	this->regno=regno;
	 	this->name=name;
	 	this->marks=marks;
	 	count++;
	 }
	 Student(Student &s) // copy constructor
	 {
	 	regno=s.regno;
	 	name=s.name;
	 	marks=s.marks;
	 	count++;
	 	
	 }
	 // define destructor
	 ~Student()
	 {
	 	cout<<"Object Destroyed"<<endl;
	 }
	 void Userinput()
	{
		cout<<"enter your regno:"<<endl;
		cin>>regno;
		cout<<"enter your name:"<<endl;
		cin>>name;
		cout<<"enter your marks:"<<endl;
		cin>>marks;
		cout<<"Enter day of birth"<<endl;
		cin>>d.dd;
		cout<<"Enter month of birth"<<endl;
		cin>>d.mon;
		cout<<"Enter year of birth"<<endl;
		cin>>d.dd;
	}
	 
	 void Show()
	{
		cout<<"student details "<<regno<<"\t"<<name<<"\t"<<marks<<"\t"<<course<<endl;
		cout<<"DOB-"<<d.dd<<"-"<<d.mon<<"-"<<d.year<<endl;
		
	}
	
};
string Student::course="C++";
int Student::count=0;
int main()
{
	Student s1; //implicit calling of constructor
	s1.Show();
	s1.Userinput();
	s1.Show();
	Student s3(107,"Anuj Aggarwal",88.00);
	s3.Show();
	Student s2(s1); //explicit calling of constructor
	s2.Show();
	Student::changecourse("Python");
	Student s4(111,"Raj",66);
	s4.Show();
	cout<<"number of objects "<<Student::count<<endl;
	

}