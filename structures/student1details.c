#include<stdio.h>
struct student{
	char name[20];
	int rno;
	int class;
	float marks;
}student1;
int main(){ 
printf("enter the details os students :");
scanf("%s %d %d %f",student1.name,&student1.rno,&student1.class,&student1.marks);
printf("here the details\n");
printf("%s %d %d %f",student1.name,student1.rno,student1.class,student1.marks);
}

