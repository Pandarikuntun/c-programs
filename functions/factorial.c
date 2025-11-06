// with return type & with arguments
// factorial
#include<stdio.h>
int factorial(int n){
	int i,fact=1;
	for(i=1;i<=n;i++)
	fact*=i;
	return fact;
}
main(){
	int x;
	printf("enter the number :");
	scanf("%d",&x);
	printf("%d\n",factorial(x));
	
	int y=factorial(x);
	printf("%d",y);
	
}

