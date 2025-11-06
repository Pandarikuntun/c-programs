// gratest of two numbers using conditional operator
#include<stdio.h>
main(){
	int x;
	printf("nter the value :");
	scanf("%d",&x);
	//x%2==0 ? printf("even") :printf("odd");
	printf("%s",x%2==0 ? "even" : "odd");
}
