// positive or negative using terinory operator
#include<stdio.h>
main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	n>0 ? printf("%d is positive",n) : n<0 ? printf("%d is negative",n) :printf("zero");
}
