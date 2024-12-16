// Break and continue Statement in c
#include<stdio.h>
int main()
{
	int k=1;
	for ( ;k<=100;k++)
	{
		if (k>20 && k<=50)
		{
			continue;
		}
		else
		{
				printf("%d\t",k);
		}
	
	}
	return 0;
}