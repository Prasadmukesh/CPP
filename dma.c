#include<stdio.h>  
#include<stdlib.h>  
int main(){  
 int n,i;
 char *ptr;   
    printf("Enter number of character: ");    
    scanf("%d",&n);    
    ptr=(char*)malloc(n);  //memory allocated using calloc    
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    } 
	
	printf("Enter new size: ");    
    scanf("%d",&n); 
	ptr=realloc(ptr,n);
	
	     
    printf("Enter charcter one by one \n");   
	for(i=0;i<n;i++) 
	{	
    scanf("%s",ptr+i);
	}
	
	printf("%s",ptr);   
	
	return 0;
}