// even or odd using ternary operator
#include<stdio.h>
main(){
	int n;
	printf("enter the number");
	scanf("%d",&n);
	n%2==0 ? printf("%d is even",n) : printf("%d is odd",n);
}
