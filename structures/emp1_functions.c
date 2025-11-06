//multiple employee details
#include<stdio.h>
void experience(int years){
	if(years>5)
	printf("%d years experienced employee\n",years);
	else
	printf("no experience of this employe he can work some more days to get experience\n");
}
struct employe{
	char name[20];
	int id;
	int salary;
	int years;
};
main(){
	int i,n;
	struct employe emp[0];
	printf("enter how many members are there :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("\nenter the details of employee\n");
		scanf("%s%d%d%d",emp[i].name,&emp[i].id,&emp[i].salary,&emp[i].years);
		printf("\nemployee details[i]");
		printf("\nName\tId\tSalary\tYears");
		printf("\n%s\t%d\t%d\t%d",emp[i].name,emp[i].id,emp[i].salary,emp[i].years);
		printf("\nstatus : ");
		experience(emp[i].years);
	}
	
}
