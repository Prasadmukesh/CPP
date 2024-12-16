#include<stdio.h>
int main()
{
	int id=12345;
	char name[10];
	float age=18;
	printf("Enter your name :");
	scanf("%s",name);
	
	
	printf("hello %s\n",name);
	printf("Age %.1f\n",age);
	printf("Id %d",id);	
	
	
	return 0;
}
