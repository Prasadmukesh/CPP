#include<stdio.h>
#include<stdlib.h>
int main()
{
	int op,qty;
	float bill;
	printf("-------MENU---------\n 1. Mouse 199.00 \n 2. Keyboard 399.00\n 3. Pendrive 489.00\n 0. Exit \n-----------------\n");
	while(1){
	
	printf("\n\nEnter option :");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("\n Enter Quantity :");
			scanf("%d",&qty);
			bill= qty*199.00;
			printf("Total Bill Rs.%.2f",bill);
			break;
		case 2:
			printf("\n Enter Quantity :");
			scanf("%d",&qty);
			bill=bill+ qty*399.00;
			printf("Total Bill Rs.%.2f",bill);
			break;
		case 3:
			printf("\n Enter Quantity :");
			scanf("%d",&qty);
			bill= bill+qty*489.00;
			printf("Total Bill Rs.%.2f",bill);
			break;
		case 0:
			exit(0);
		default:
			printf("Invalid Option");
			break;
}
}

return 0;
}