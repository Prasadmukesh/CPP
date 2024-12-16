#include <iostream>  
using namespace std;  
float division(int x, int y) { 

	if (y==0)
	{
	throw "Zero Divisio error";
	 } 
   return (x/y); 
   
	
}  

void Add(int x, int y)
{
	cout<<"Sum is "<<x+y<<endl;
}
int main () {  
   int i = 50;  
   int j = 2;  
   float k = 0;  
   try{
   	k = division(i, j);  
    cout << k << endl; 
   }
   catch(char *e)
   {
   	cout<<e<<endl;
   }

    Add(i,j);
	cout<<"Hello Abhay"<<endl; 
   return 0;  
}  