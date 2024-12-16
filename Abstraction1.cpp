// program to calculate the power and squareroot of a number.

#include <iostream>  
#include<math.h> 
#include"Calc.cpp"  
using namespace std;  
int main()  
{  
 Cal c;  
 int n = 4;  
   int power = 5;  
   int result = pow(n,power);         // pow(n,power) is the  power function  
   cout << "Cube of n is : " <<result<<endl;
   cout<<"Sqaure root of 3 is "<<sqrt(3)<<endl; 
   float si=c.sical(12000,8.0,6); 
   cout<<"Simple interest is rs"<<si<<endl;
   return 0;  
}  