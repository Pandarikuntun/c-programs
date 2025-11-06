//recursive methode
//using with return type with argument
//print the factorial using recursive method
#include<stdio.h>
int fact(int n){
	int r;
	if(n==0){
		r=1;
	}
	else{
		r=n*fact(n-1);
	}
	return r;
}
main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	int x=fact(n);				// calling
	printf("%d factorial is %d",n,x);
}
