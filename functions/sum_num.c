// with return type and with arguments
//sum of natural numbers
#include<stdio.h>
int sum_n(int n){
	int i,sum=0;
	printf("enter the last number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
main(){
	int x;
	sum_n(x);
}
