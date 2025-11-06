
// we can pass a structure data members as a arguments
#include<stdio.h>
void grade(char name[],int rol,int clas,float marks){
	if(marks>250)
	printf("you are pass");
	else
	printf("you are fail");
}
struct student{
	char name[20];
	int rol;
	int clas;
	float marks;
}s1;
main(){
	printf("enter a student details :");
	scanf("%s%d%d%f",s1.name,&s1.rol,&s1.clas,&s1.marks);
	printf("%s\t%d\t%d\t%f\n",s1.name,s1.rol,s1.clas,s1.marks);
	grade(s1.name,s1.rol,s1.clas,s1.marks);
}
