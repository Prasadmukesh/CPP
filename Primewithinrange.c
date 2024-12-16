// Break and continue Statement in c
#include<stdio.h>
int main()
{
	int k,j,c;
	for ( k=1;k<=100;k++)
	{
		c=0;
		for(j=1;j<=k;j++)
		{
			if(k%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			printf("%d\t",k);
		}
	
	}
	return 0;
}