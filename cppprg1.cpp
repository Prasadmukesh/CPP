#include<iostream>
using namespace std;
class Manas
{
	string name;
	int age;
	string city;
	
	public:void Input()
	{
	
	cout<<"Enter your name:";
	cin>>name;
	cout<<"Enter your age:";
	cin>>age;
	cout<<"Enter your city:";
	cin>>city;
	
	}
	void Display()
	{
			cout<<"My good name is Mr."<<name<<endl;
			cout<<"my age is "<<age<<"years"<<endl;
			cout<<"I live in  "<<city<<" "<<endl;
			
	}	
	void Bsearch(int arr,int n)
	{
		int se,beg=0,end=n,mid;
		mid=(beg+end)/2;
		cout<<"Enter searched element ";
		cin>>se;
	}
};


int main()
{
	int x[11]={2,3,5,7,9,34,56,78,90,123,455};
	string msg="Welcome to cpp programming world";
	cout<<msg<<"\n"<<endl;
	Manas m;
	m.Input();
	m.Display();
	Manas m1;
	m1.Input();
	m1.Display(); 
	

	return 0;
	
}