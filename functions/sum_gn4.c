// with return type and with arguments
//sum of digits of given number
#include<stdio.h>
sum_dig(){
	int x,r,sum=0;
	printf("enter the number :");
	scanf("%d",&x);
	while(x>0){
		r=x%10;
		sum=sum+r;
		x/=10;
	}
	x=sum;
	sum=0;
	while(x>0){
		r=x%10;
		sum+=r;
		x/=10;
	}
	return sum;
}
main(){
	int result;
	result = sum_dig();
	printf("%d",result);
}
