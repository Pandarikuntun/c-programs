// sum of natural numbers using while loop
#include<stdio.h>
main(){
	int i,n,sum=0;
	printf("enter the n value :");
	scanf("%d",&n);
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("%d",sum);
}
