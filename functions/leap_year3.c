// with return type and with arguments
//leap year or not
#include<stdio.h>
int leap_year(int x){
	if(x%400==0 || x%4==0 && x%100!=0)
	printf("leap year");
	else
	printf("not leap year");
	return 0;	//x%400==0 || x%4==0 && x%100!=0 ? printf("leap year") : printf("not leap year");
	
}
main(){
	int g;
	printf("enter the year :");
	scanf("%d",&g);
	leap_year(g);
}
