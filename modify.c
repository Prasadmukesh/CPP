#include<stdio.h>
int main()
{
	int arr[10];
	int i,c=0,num,index,flag=0,m;
	//input
	printf("Enter Array Data\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		c++;
	
	}
	//display
	printf("Array Data\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
		
	}
	// modify the specified data
	printf("Enter data to be modify:");
	scanf("%d",&num);
	printf("Enter new number:");
	scanf("%d",&m);
		for(i=0;i<10;i++)
		{
		
		if(num==arr[i])
		{
			flag=1;
			index=i;
			break;
		}
		
	}
	if (flag==1){
		printf("Data found at index %d",index);
		arr[index]=m;
	}
	else
	{
		printf("Data not found");	
	}
		//display
	printf(" Updated Array Data\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
		
	}
	return 0;
}