#include<stdio.h>
int main()
{
	int n1=9000,n2=1000;
	
	printf("Address of n1 %u\n",&n1);
	
	printf("Address of n2 %u\n",&n2);
	
	printf("n1=%d\nn2=%d\n",n1,n2);
	
	int t=n1;
	n1=n2;
	n2=t;
	
	
	printf("n1=%d\nn2=%d\n",n1,n2);
	
	
	return 0;
}