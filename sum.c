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
	printf("n1=%d\n",n1);
	printf("n2=%d\n",n2);
	res=n1+n2;
	printf("Sum is %d\n",res);
	
	res=n1;
	n1=n2;
	n2=res;
	
	printf("n1=%d\n",n1);
	printf("n2=%d",n2);
	
	return 0;
}
	
	
	
	
	
	
