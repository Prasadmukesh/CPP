// method overloading
#include<iostream>
using namespace std;
class Calculator
{
	
	public: 
	void Add(int a,int b)
	{
	int	x=a+b;
		cout<<"Sum is "<<x<<endl;
	}
	void Add(float a, float b )
	{
		float	x=a+b;
		cout<<"Sum is "<<x<<endl;
	}
	void Add(string a, string b)
	{
	string x=a+b;
		cout<<"Sum is "<<x<<endl;
	}
	void Add(double a, double b)
	{
	double x=a+b;
		cout<<"Sum is "<<x<<endl;
	}

	
};
int main()
{
	Calculator c1;
	c1.Add("Parth ","Sharma");
	c1.Add(100.00,190.88);
	return 0;
}