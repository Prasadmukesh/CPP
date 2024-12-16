// method overloading
#include<iostream>
using namespace std;
class Calculator
{
	int x=0;
	public: void Add(int a)
	{
		x=x+a;
		cout<<"Sum is "<<x<<endl;
	}
	void Add(int a,int b)
	{
		x=a+b;
		cout<<"Sum is "<<x<<endl;
	}
	void Add(int a, int b ,int c)
	{
			x=a+b+c;
		cout<<"Sum is "<<x<<endl;
	}
	void Add(int a, int b, int c,int d)
	{
		x=a+b+c+d;
		cout<<"Sum is "<<x<<endl;
	}

	
};
int main()
{
	Calculator c1;
	c1.Add(567);
	c1.Add(44,88,33);
	return 0;
}