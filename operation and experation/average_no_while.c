// average of n positive numbers
#include<stdio.h>
main(){
	int n,i,sum=0;
	printf("enter the last number :");
	scanf("%d",&n);
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("sum of the 1 to %d is :%d\n",n,sum);
	float avg=(float)sum/n;
	printf("average is :%.3f\n",avg);
}
