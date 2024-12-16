#include<stdio.h>
struct Person{
int pid;
char pname[30];
int age;
float salary;
char gender;
// struct within struct
struct DOB{
	int dd;
	char mon[3];
	int yy;
}dob;
};

int main()
{
	struct Person p[100];
	int n,i;
	printf("Enter number of person ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter Person details[id,name,age,salary,gender]\n");
	scanf("%d%s%d%f",&p[i].pid,p[i].pname,&p[i].age,&p[i].salary);
	fflush(stdin);
	scanf("%c",&p[i].gender);
	printf("Enter DOB details\n");
	scanf("%d%s%d",&p[i].dob.dd,p[i].dob.mon,&p[i].dob.yy);
	}

	for(i=0;i<n;i++)
	{
	printf("%d\t%s\t%d\t%f\t%c\n",p[i].pid,p[i].pname,p[i].age,p[i].salary,p[i].gender);
	printf("dob:- %d-%s-%d\n",p[i].dob.dd,p[i].dob.mon,p[i].dob.yy);
	}
	

	
	
	return 0;
}