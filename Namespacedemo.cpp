#include<iostream>
#include<math.h>
using namespace std;
namespace Abhay{
    double	PI =3.14;
	void Hello()
	{
		cout<<"Hello Sir Good morning!"<<endl;
	}
	void Sayhello(string name)
	{
		cout<<"Hello Mr./Ms./Mrs. "<<name<<endl;
	}
	void PrintABC()
	{
		for (int x=65;x<=90;x++)
		{
			cout<<char(x)<<" ";
		}
	}
	
	
}
namespace mukesh{
	void Hello()
	{
		cout<<"Hello, Good morning!"<<endl;
	}
	void Sayhello(string name)
	{
		cout<<"Hello Mr./Ms./Mrs. "<<name<<endl;
	}
}
namespace Calculate
{
	int Add(int a, int b)
	{
		return a+b;
	}
		int Sub(int a, int b)
	{
		return a-b;
	}
		int Mul(int a, int b)
	{
		return a*b;
	}
		int Div(int a, int b)
	{
		return a/b;
	}
}

namespace Tgc{
	
	class Alpha
	{
		public:	double Area_R(double l,double b)
		{
			return l*b;
		}
		double Area_C(double r)
		{
			return M_PI*r*r;
		}
	};
}