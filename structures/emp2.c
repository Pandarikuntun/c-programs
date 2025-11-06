
//multiple employee details
#include<stdio.h>
struct employe{
	char name[20];
	int id;
	int salary;
	
}emp1;
main()
{
struct employe emp2;
printf("enter employee details :\n");
scanf("%s%d%d",emp1.name,&emp2.id,&emp1.salary);
scanf("%s%d%d",emp2.name,&emp2.id,&emp2.salary);
printf("name\tid\tsalary\n");
printf("\n%s\t%d\t%d\n",emp1.name,emp1.id,emp1.salary);
printf("\n%s\t%d\t%d\n",emp2.name,emp2.id,emp2.salary);
	
}
