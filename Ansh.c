#include<stdio.h>
int main()
{
	int x=101 ,y=88;
	int s=x*x;
	int c=s*x;
	printf("square  %d is %d\n",x,s);
	printf("cube of  %d is %d\n",x,c);
	printf("size of x %d bytes\n",sizeof(x));
	
	int sum	=x+y;
	printf("Sum is %d\n",sum);
	
	
	int d	=x-y;
	printf("diff is %d\n",d);
	int m	=x*y;
	printf("mul is %d\n",m);
	int div	=x/y;
	printf("div is %d\n",div);
	
	if(x%2==0)
	{
		printf("Even number");	
	}
	else
	{
			printf("Odd number");	
	}
}