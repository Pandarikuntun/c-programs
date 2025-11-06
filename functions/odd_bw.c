// with return type and without arguments
// print odd numbers in between
#include<stdio.h>
int odd_num(){
	int a,b,i;
	printf("enter the fist and last number :");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	if(i%2!=0)
	printf("%d\t",i);
	return 0;
}
main(){
	odd_num();
}
