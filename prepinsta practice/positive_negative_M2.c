//positive or negative using nested if-else statements
#include<stdio.h>
main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	if(n<=0){
		if(n<0)
		printf("%d is negative",n);
		else
		printf("%d is zero",n);
	}
	else
	printf("%d is positive",n);
}
