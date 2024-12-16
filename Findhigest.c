// find the highest value among three values
#include<stdio.h>
int main()
{
	float a,b,c,res;
	printf("Enter any Three floating number :");
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			res=a;
		}
		else
		{
			res=c;
		}
			
	}
	else
	{
		if(b>c)
		{
			res=b;
		}
		else
		{
			res=c;
		}
	}
	
printf("Highest value is %f",res);
}