#include<iostream>
#include"Namespacedemo.cpp"
using namespace std;

int main()
{
	using namespace Calculate;
	int a=90,b=77,res;
	Abhay::Hello();
	Abhay::PrintABC();
	cout<<endl;
	mukesh::Hello();
	res=Add(a,b);
	cout<<"Sum is "<<res<<endl;
	cout<<"value of PI "<<Abhay::PI<<endl;
	Tgc::Alpha alpha;
	double area=alpha.Area_C(28.00);
	cout<<"Area of Circle "<<area;
	return 0;
	
}