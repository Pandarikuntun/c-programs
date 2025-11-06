// one variable as a argument in a function
#include<stdio.h>
void grade(float marks){
	if(marks>90)
	printf("A grade");
	else if(marks<90 || marks>80)
	printf("B grade");
	else if(marks<80 || marks>70)
	printf("C grade");
	else if(marks<70 || marks>60)
	printf("D grade");
	else
	printf("F grade");
}
struct student{
	char name[20];
	int rol;
	int clas;
	float marks;
};
main(){
	struct student s1;
	printf("enter a student details \nname\nrol\nclass\nmarks\n");
	scanf("%s%d%d%f",s1.name,&s1.rol,&s1.clas,&s1.marks);
	printf("%s\t%d\t%d\t%f\n",s1.name,s1.rol,s1.clas,s1.marks);
	grade(s1.marks);
}
