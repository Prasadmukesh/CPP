#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	double y;
	
	printf("Enter a number : ");
	scanf("%d",&x);
	printf("size of int %d bytes\n",sizeof(int));
	printf("memory address of x %u\n",&x);
	printf("Hello C!\n");
	
	y=sqrt(x);
	
	printf("sqrt of %d=%f\n",x,y);
	
	if(x%2==0)
	{
		printf("\nEven ");
	}
	else
	{
		printf("\nOdd number");
	}
	
	return 0;
	
}