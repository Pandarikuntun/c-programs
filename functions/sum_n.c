// with return type and with arguments
// sum of natural numbers
#include<stdio.h>
int sum_n(int x){
	int sum=0,i;
	for(i=1;i<=x;i++){
		sum=sum+i;
	}
	return sum;
}

main(){
	int c,x;
	printf("enter the last digit of natural number :");
	scanf("%d",&x);
	c=sum_n(x);
	printf("%d",c);
}
