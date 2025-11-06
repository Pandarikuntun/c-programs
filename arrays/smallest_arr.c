//smallest of array elements
#include<stdio.h>
main(){
	int a[50],i,s[0],SIZE;
	printf("enter the size of array :");
	scanf("%d",&SIZE);
	printf("enter the array eliments:\n");
	for(i=0;i<SIZE;i++)
	scanf("%d",&a[i]);
	printf("array eliments are:\n");
	for(i=0;i<SIZE;i++)
	printf("%d ",a[i]);
	for(i=0;i<SIZE;i++)
	if(a[i]<s[0]){
		s[0]=a[i];
	}
	printf("\nsmalest is :%d ",s[0]);
}
