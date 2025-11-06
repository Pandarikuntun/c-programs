// without return type and with arguments
// multiplication table
#include<stdio.h>
void multi(int n);
main(){
	int x,i;
	printf("enter the number :");
	scanf("%d",&x);
	multi(x);
//	multi(x);
}
void multi(int n){
	int i;
	for(i=1;i<=10;i++)
	printf("%d x %d =%d\n",n,i,n*i);
}
