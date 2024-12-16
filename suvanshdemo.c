#include<stdio.h>
int main()
{
	char name[]="Suvansh ved";
	int age=17;
	char gender='M';
	float marks=99.88;
	printf("Hello  i am %s , i am %d years old\n",name,age);
	printf("Gender %c\n",gender);
	printf("Marks %.2f\n",marks);
	
	if(age>=18)
	{
		printf("You are eligible for vote");
	}
	else
	{
		printf("You are not eligible for vote");
	}
	
	return 0;
}