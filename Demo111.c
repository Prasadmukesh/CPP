#include<stdio.h>
int main()
{
	char str[100];
	int i,v=0;
	printf("Enter a string :");
	scanf("%s",str);
	printf("hello %s",str);
	
	for(i=0;i<str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			v=v+1;
		}
	}
	printf("No of vowels  %d",v);
	
	return 0;
}
