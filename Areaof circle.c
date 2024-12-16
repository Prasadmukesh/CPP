// Compute area and circumference of circle
#include<stdio.h>
#define PI 3.14
int main()
{
	float area,cir,r;
	printf("Enter Radius of Circle:");
	scanf("%f",&r);
	area=PI*r*r;
	cir=2*PI*r;
	printf("area of circle %f\n",area);
	printf("Circumference of circle %f",cir);
}