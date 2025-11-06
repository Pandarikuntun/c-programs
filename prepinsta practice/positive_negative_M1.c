// positive or negative using brute force method
#include<stdio.h>
main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if(n<0)
	printf("%d is negative",n);
	else if(n>0)
	printf("%d is positive",n);
	else
	printf("%d is zero",n);
}
