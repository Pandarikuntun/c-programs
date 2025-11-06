// without return type and with arguments
// leap year or not
#include<stdio.h>
void leap_year(unsigned int );
main(){
	unsigned int year;
	printf("enter the year :");
	scanf("%d",&year);
	leap_year(year);
	leap_year(400);
}
void leap_year(unsigned int l){
	l%400==0 || l%4==0 && l%100!=0 ? printf("leap year\n") : printf("not leap year\n");
}
