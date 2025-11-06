// sum of natural numbers using for loop
#include<stdio.h>
main(){
	int i,sum=0,n;
	printf("enter the last number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum +=i;
	}
	printf("%d",sum);
}
