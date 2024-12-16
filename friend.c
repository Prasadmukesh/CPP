#include<iostream>
using namespace std;
class Alpha{
	int p;
	int q;
	public: void getpq(int x, int y){
		p=x;
		q=y;
	}
	friend void getsum(Alpha a);
	
};