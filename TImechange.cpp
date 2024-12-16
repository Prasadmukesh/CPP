#include<iostream>
using namespace std;
int main()
{
	int sec,min,hour;
	cout<<"Enter Time in seconds :"<<endl;
	cin>>sec;
	cout<<"\n You have entered  "<<endl;
	cout<<sec<<"\t";
	//logic 
	min=sec/60;
	sec=sec%60;
	hour=min/60;
	min=min%60;
	cout<<"\n"<<hour<<"hours\t"<<min<<"min\t"<<sec<<"sec"<<endl;

	
	return 0;
}