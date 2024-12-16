#include<iostream>
using namespace std;
class Cal
{
	private: int a;
			 int b;
	public:
		void Getab()
		{
			cout<<"Enter two number :";
			cin>>a>>b;
		}
		void Show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"Address of a "<<&a;
			cout<<"Address of b "<<&b;
		}
		void Add()
		{
			cout<<"Sum is "<<a+b;
		}
		
		void Diff()
		{
			cout<<"Diff is "<<a-b;
		}	
	
};

int main()
{
	Cal eshan;
	eshan.Getab();
	eshan.Show();
	eshan.Add();
	eshan.Diff();
	
	return 0;
}