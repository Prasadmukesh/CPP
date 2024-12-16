// program to add two numbers
#include<stdio.h>
int main()
{
	int n1,n2,res;  //Variable declaration
	//user input
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	res=n1+n2;
	printf("sum of %d and %d is %d\n",n1,n2,res);
	res=n1-n2;
	printf("diff of %d and %d is %d\n",n1,n2,res);
	res=n1*n2;
	printf("mul of %d and %d is %d\n",n1,n2,res);
	res=n1/n2;
	printf("div of %d and %d is %d\n",n1,n2,res);
	res=n1%n2;
	printf("div of %d and %d is %d\n",n1,n2,res);
	return 0;
}