#include <iostream>  
#include<math.h>
#define PI 3.14  
using namespace std;  
class Cal
{
	public:
		double sical(double p,float r, int t)
		{
			return ((p*r*t)/100);
		}
		
		double Areaofcir(float r)
		{
			return(PI*r*r);
		 } 
		
		
};