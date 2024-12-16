#include<stdio.h>
int main()
{
	float c,f;
	printf("Hello world\n");
	
	printf("Enter temp in celsius :");
	scanf("%f",&c);
	printf("temp in cel %.2f\n",c);
	
	f=(9*c)/5+32;
	
	printf("temp in feh %.2f\n",f);
	
	printf("temp in kelvin %.2f",c+273);
	
	if(f>=101)
	{
		printf("Fever detected\n");
	}
	else
	{
		printf("Normal");
	}
	
	
	
	return 0;
}