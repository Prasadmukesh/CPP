#include<stdio.h>  
#include<stdlib.h>
#include<string.h>
int main(){  
  int n,i,sum=0;  
  char *ptr;  
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    ptr=(char*)malloc(n);  //memory allocated using malloc    
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }  
	
	strcpy(ptr,"Gautam"); 
	printf("%d",strlen(ptr));
	puts(ptr);
	
	ptr=realloc(ptr,100);
	

   strcpy(ptr,"Gautam kumar adani"); 
		printf("%d",strlen(ptr));
	puts(ptr);
	
   
    free(ptr);     
return 0;  
}    