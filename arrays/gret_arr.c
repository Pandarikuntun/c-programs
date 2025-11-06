// greatest of arrays elemets
#include<stdio.h>
main(){
	int a[50],i,g[i],SIZE;
	printf("enter the size of array :");
	scanf("%d",&SIZE);
	printf("enter the array eliments:\n");
	for(i=0;i<SIZE;i++)
	scanf("%d",&a[i]);
	printf("array eliments are:\n");
	for(i=0;i<SIZE;i++)
	printf("%d ",a[i]);
	for(i=0;i<SIZE;i++)
	if(g[0]<a[i]){
		g[0]=a[i];
	}
	printf("\ngretest is :%d ",g[0]);
}
