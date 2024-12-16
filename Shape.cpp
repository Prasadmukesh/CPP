#include<iostream>
using namespace std;
class Shape{
	public: virtual void area()
	{
		cout<<"calculating area ...........";
	}
	virtual void  getp()
	{
			cout<<" getting data ...........";
	
	}
};
class Rectangle:public Shape
{
	float l,b;
	public: void getp()
	{
		cout<<"Enter length and width of rectangle "<<endl;
		cin>>l>>b;
	}
	void area()
	{
		cout<<"Area of Rectangle is "<<l*b<<endl;
	}
};

int main()
{
	Rectangle r1;
	r1.getp();
	r1.area();
	
}