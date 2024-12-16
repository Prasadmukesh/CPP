#include<stdio.h>
struct Person{
int pid;
char pname[30];
int age;
float salary;
char gender;
};

int main()
{
	struct Person p1={101,"Manas",19,24000.00,'m'};
	struct Person p2={102,"Sajan",20,25000.00,'m'};
	struct Person p3;
	printf("Enter Person details\n");
	scanf("%d%s%d%f",&p3.pid,p3.pname,&p3.age,&p3.salary);
	fflush(stdin);
	scanf("%c",&p3.gender);
	
	printf("%d\t%s\t%d\t%f\t%c\n",p1.pid,p1.pname,p1.age,p1.salary,p1.gender);
	printf("%d\t%s\t%d\t%f\t%c\n",p2.pid,p2.pname,p2.age,p2.salary,p2.gender);
	printf("%d\t%s\t%d\t%f\t%c\n",p3.pid,p3.pname,p3.age,p3.salary,p3.gender);
	
	return 0;
}