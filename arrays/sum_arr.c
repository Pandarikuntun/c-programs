//SUM OF INTGER ARRAY ELEMENTS
#include<stdio.h>
main(){
	int ar[5],i,sum=0;
	printf("enter the array elements :\n");
	for(i=0;i<5;i++)
	scanf("%d",&ar[i]);
	for(i=0;i<5;i++)
	printf("%d ",ar[i]);
	for(i=0;i<5;i++)
	sum+=ar[i];
	printf("\nsum =%d",sum);
}
