#include<iostream>
using namespace std;
class Alpha{
	int p;
	int q;

	public: void getpq(int x, int y){
		p=x;
		q=y;
	}
	void getp()
	{
		cout<<"p="<<p<<"\t"<<q;
	}
	friend void getsum(Alpha);
	
};
 void getsum(Alpha a)
 {
 	cout<<"sum is "<<a.p+a.q;
 }
 
 int main()
 {
 	Alpha x;
 	x.getpq(88,66);
 	x.getp();
 	getsum(x);
	
 }