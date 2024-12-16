#include<stdio.h>
void sayhello(char name[60])
{
	printf("Hello %s\n",name);
}
int Sicalculator(int p, float r,int t)
{
	return(p*r/100*t);
}

int main()
{
	int loan=120000;
	float r=8.5;
	int t=5;
	sayhello("Suvansh");
	float si=Sicalculator(loan,r,t);
	printf("\nSi=%.2f",si);
	
	return 0;
}