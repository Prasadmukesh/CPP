// wap enter weight in kg and print it in term of quintal, ton and kg
#include<stdio.h>
int main()
{
	int kg,q,t;
	printf("Enter weight in kilogram");
	scanf("%d",&kg);
	q=kg/100;
	kg=kg%100;
	t=q/10;
	q=q%10;
	printf("%d tons\t %d quotols and %d kilogram",t,q,kg);
	
	return 0;
	
}