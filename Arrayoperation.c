#include<stdio.h>
int main()
{
	int arr[10];
	int i,c=0,total=0,avg=0,max,min,num,index,flag=0,m;
	//input
	printf("Enter Array Data\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		c++;
		total+=arr[i];
		
	}
	//display
	printf("Array Data\n");
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
		
	}
	// find the maximum
	max=arr[0];
		for(i=1;i<10;i++){
		if(max<arr[i])
		{
			max=arr[i];
		}
		
	}
	// find the minimum
	min=arr[0];
		for(i=0;i<10;i++){
		
		if(min>arr[i])
		{
			min=arr[i];
		}
		
	}
	// find the specified data
	printf("Enter data to be searched:");
	scanf("%d",&num);
	
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
	}
	else
	{
		printf("Data not found");	
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
	}
	else
	{
		printf("Data not found");	
	}
	printf("\nNo of Elements :%d",c);
	printf("\nSum of Elements :%d",total);
	avg=total/10;
	printf("\navg of Elements :%d",avg);
	printf("\n max value of Elements :%d",max);
	printf("\nmin values of Elements :%d",min);
	return 0;
}