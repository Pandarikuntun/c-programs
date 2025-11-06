#include<stdio.h>
main(){
	int arr[50]={1,2,3,4,5,6};
	int i;
	int *(ptr)=&i;
	int *ptr1=&arr[50];
	for(i=0;i<=5;i++)
	printf("%d ",i);
	printf("\n");
	printf("%d\n",*ptr);
	printf("%d\n",ptr);
	printf("%d\n",ptr1);
	
}
