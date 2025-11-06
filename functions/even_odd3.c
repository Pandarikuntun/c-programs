// with return type and with arguments
//print the given number is even or odd
#include<stdio.h>
int eo(int n){
	if(n%2==0)
	printf("even");
	else
	printf("odd");
	return 0 ;	//n%2==0 ?printf("even"): printf("odd");
}
main (){
	int x;
	printf("enter the number :");
	scanf("%d",&x);
	eo(x);
}
