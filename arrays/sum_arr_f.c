//SUM OF FLOAT ARRAY ELEMENTS
#include<stdio.h>
main(){
	float ar[5],sum=0;
	int i;
	printf("enter the array elements :\n");
	for(i=0;i<5;i++)
	scanf("%f",&ar[i]);
	for(i=0;i<5;i++)
	printf("%f ",ar[i]);
	for(i=0;i<5;i++)
	sum+=ar[i];
	printf("\nsum =%f",sum);
}
