#include<iostream>
using namespace std;
class Addition  
{
	public: void Add(int a,int b)
			{
				cout<<"Sum is "<<a+b<<endl;
			}
};

class Subtraction
{
	public: void Sub(int a,int b)
			{
				cout<<"Sum is "<<a-b<<endl;
			}
};

class Multiplication
{
	public: void Mul(int a,int b)
			{
				cout<<"Sum is "<<a*b<<endl;
			}
};

class Calculator:public Addition, public Multiplication, public Subtraction
{
	public: void Show()
	{
		cout<<"Example of multiple Inheritence"<<endl;
	}
	
};

int main()
{
  Calculator c1;
  c1.Show();
  c1.Add(124,126);
  c1.Mul(33,55);
  c1.Sub(333,111);
  return 0;

}