#include<stdio.h>
#include<math.h>
int main()
{
	int dec,bin=0,p=0,d,n;
	dec=19;
	n=dec;
	while(dec!=0)
	{
		d=dec%2;
		bin=bin+d*pow(10,p);
		dec=dec/2;
		p++;
	}
	printf("Binary Equivalent of %d is %d",n,bin);
}
