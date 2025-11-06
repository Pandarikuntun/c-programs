#include<stdio.h>
struct college_staff{
	char name[10];
	int id;
	char des[10];
	double num;
	float sal;
};
void staff(struct college_staff cs){
	if(cs.sal<10000)
	printf("junior staff");
	else
	printf("senior staff");
}
main(){
	struct college_staff cs1;
	printf("enter the staff details :\n");
	scanf("%s%d%s%u%f",cs1.name,&cs1.id,cs1.des,&cs1.num,&cs1.sal);
	printf("\ndetails of staff\n");
	printf("NAME\tID\tDESIGNATION\tNUMBER\tSALARY\n");
	printf("%s\t%d\t%s\t%u\t%f\n",cs1.name,cs1.id,cs1.des,cs1.num,cs1.sal);
	printf("\nstatus :");
	staff(cs1);
}
