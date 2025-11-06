//without return type and without arguments
// print leap year or not
#include<stdio.h>
void leap_year();
main(){
	leap_year();
}
void leap_year(){
	int x;
	printf("enter year :");
	scanf("%d",&x);
/*	if(x%4==0 && x%400==0 || x%100!=0)
	printf("leap year");
	else 
	printf("Not leap year");
*/
	x%4==0 && x%400==0 || x%100!=0 ? printf("leap year"): printf("not leap year");
}
