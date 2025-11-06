//SIZE OF ARRAY USING MACROS
#include<stdio.h>
#define SIZE 10
main(){
	int ar[SIZE],i;
	printf("enter eliments :\n");
	for(i=0;i<SIZE;i++)
	scanf("%d",&ar[i]);
	for(i=0;i<SIZE;i++)
	printf("%d ",ar[i]);
}
