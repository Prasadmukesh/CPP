#include<iostream>
#include"VirtualFundemo.cpp"
using namespace std;
int main()
{
	Bank *bank;
	Denabank c1;
	Apnabank c2;
	
	bank=&c1;
	bank->openaccount();
	bank->Show();
	bank=&c2;
	bank->openaccount();
	bank->Show();
	
}