//leap year or not 
#include<stdio.h>
main(){
	int x;
	printf("enter the year :");
	scanf("%d",&x);
	x%4==0 && x%400==0 && x%100==0 ? printf(" leap year") : x%4==0 || x%400==0 ? printf("leap year") :printf("not a leap year");
}
