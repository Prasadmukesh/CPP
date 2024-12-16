#include<stdio.h>
#include<string.h>
int main()
{
	char data[100];
	char gen;
	int age;
	float income;
	char title[5];
	
	printf("Enter Your good Name:");
	scanf("%s",data);
	printf("Enter Your gender:");
	fflush(stdin);
	scanf("%c",&gen);
	printf("Enter Your Age :");
	scanf("%d",&age);
	printf("Enter Your income:");
	scanf("%f",&income);
	
	if(gen=='M' || gen=='m')
	{
		strcpy(title,"Mr.");
	}
	else
	{
		strcpy(title,"Mrs.");
	}
	printf("Hello %s %s \t %c \t %d \t %f",title,data,gen,age,income);
	
	return 0;
	
}