#include <iostream>  
using namespace std;  
template<class T> T Add(T &a,T &b)  
{  
    T result = a+b;  
    return result;  
      
}  

int main()  
{  
  int i =12;  
  int j =13;  
  cout<<"Addition of i and j is :"<<Add(i,j);  
  cout<<'\n';  
  float m = 12.3;  
  float n = 17.2;  
  
  cout<<"Addition of m and n is :"<<Add(m,n);  
  cout<<"\n";
  
  
  double x=61.7089718f;
  double y=36.7089776f;
  cout<<"Addition of i and j is :"<<Add(x,y);  
  cout<<'\n';  
  
  string fname="Gautam";
  string lname="suman";
  cout<<"Addition of i and j is :"<<Add(fname,lname);  
  cout<<'\n';  
  return 0;  
}  