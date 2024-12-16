#include<stdio.h>
int main()
{
	int n1=1334;
	int n2=9000;
	
	int n3;
	
	n3=n1+n2;
	printf("Value of num1 %d\n",n1);
	printf("Value of num2 %d\n",n2);
	printf("Sum is  %d\n",n3);
	n3=n1-n2;
	printf("sub is  %d\n",n3);
	n3=n1*n2;
	printf("mul is  %d\n",n3);
	n3=n2/n1;
	printf("div is  %d\n",n3);
	
	if(n1>n2)
	{
		printf("highest value is %d",n1);
	}
	else
	{
			printf("highest value is %d",n2);
	}
	
	
	return 0;
}