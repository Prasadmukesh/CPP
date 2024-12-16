#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    public:  
    T num1;  
    T num2;  
    
    void Getdata(){
    	cout<<"Enter a number :";
    	cin>>num1;
    	cout<<"Enter another number :";
    	cin>>num2;
	}
    void add()  
    {  
        cout << "Addition of num1 and num2 : " << num1+num2<<std::endl;  
    }  
    void sub()  
    {  
        cout << "Addition of num1 and num2 : " << num1-num2<<std::endl;  
    }  
    void mul()  
    {  
        cout << "Addition of num1 and num2 : " << num1*num2<<std::endl;  
    }  
      
};  
  
int main()  
{  
    A<int> d;  
    d.Getdata();
    d.add();
	
	A<float> d1;
	d1.Getdata();
	d1.mul();    
    return 0;  
}  