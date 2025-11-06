// without return type and without arguments
//print multiplication table
#include<stdio.h>
void mult_tab();
main(){
	mult_tab();
	printf("next one\n");
	mult_tab();
}
void mult_tab(){
	int i,n;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	printf("%d x %d =%d\n",n,i,n*i);
}
