// given number is +ve or -ve or Zero
#include<stdio.h>
main(){
	int x;
	printf("enter the value :");
	scanf("%d",&x);
	x>0 ? printf("positive"): x<0 ? printf("negative"): printf("zero");
}
