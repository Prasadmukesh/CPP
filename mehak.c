#include<stdio.h>
int main()
{
	float celsius;
	float feh=0.0;
	
	printf("Enter temp in celsius :");
	scanf("%f",&celsius);
	feh=(9*celsius)/5+32;
	
	printf("%.2f celsius = %.2f feh\n",celsius,feh);
	
	if(feh<=100.00)
	{
		printf("Normal\n");
	}
	else if(feh>=100.00 && feh<=103.00)
	{
		printf("Low fever\n");
	}
	else{
		printf("high fever\n");
	}
	
	return 0;
}