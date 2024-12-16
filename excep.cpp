#include <iostream> 
#include<exception> 
using namespace std; 
 
float division(int x, int y) {  

	if(y==0)
	{
		throw "Zero Division Error";
	}
   return (x/y);  
}  


void Add(int x, int y)
{
	cout<<"Sum is "<<x+y<<endl;
}

int main () {  
   int i = 50;  
   int j = 0;  
   float k = 0;  
   
   
  
   try
   {
   	k = division(i, j);  
    cout << k << endl; 
   }
   catch(const char *msg)
   {
   	cout<<msg<<endl;
   }
	
    Add(i,j);
	cout<<"Hello Abhay"<<endl; 
   return 0;  
}  