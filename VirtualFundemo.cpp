#include<iostream>
using namespace std;
class Bank
{
	public:virtual void openaccount()
	{
		cout<<"base class fnction1";	
	}
		   virtual void	Show(){
		   	cout<<"base class fnction2";	
		   }
//		   virtual void Deposit();
//		   virtual void Withdraw();
};
class Denabank:public Bank
{
	string fullname;
	float balance;
	static int accno;
	public:void openaccount() 
	{
		cout<<"---WelCome To Dena Bank---"<<endl;
		cout<<"Enter Your full name ";
		cin>>fullname;
		cout<<"Enter Your Balance ";
		cin>>balance;
		cout<<"\nAccount Opened Successfully"<<endl;
		accno=accno+1;
	}
	void Show()
	{
		cout<<"Account Number is "<<accno<<endl;
		cout<<"Account Holder Name "<<fullname<<endl;
		cout<<"Current Balance is Rs. "<<balance<<endl;
	}
	
};
int Denabank::accno=1000;
class Apnabank:public Bank
{
	string fullname;
	float balance;
	static int accno;
	public:void openaccount() 
	{
		cout<<"---WelCome To Apna Bank---"<<endl;
		cout<<"Enter Your full name ";
		cin>>fullname;
		cout<<"Enter Your Balance ";
		cin>>balance;
		cout<<"Account Opened Successfully"<<endl;
		accno=accno+1;
	}
	void Show()
	{
		cout<<"Account Number is "<<accno<<endl;
		cout<<"Account Holder Name "<<fullname<<endl;
		cout<<"Current Balance is Rs. "<<balance<<endl;
	}
	
};
int Apnabank::accno=2000;