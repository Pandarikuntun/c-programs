//size of array insisalize by user
#include<stdio.h>

main()
{
	int a[50],i,SIZE;
	printf("Enter size ");
	scanf("%d",&SIZE);
	printf("enter the eliments :\n");
	for(i=0;i<SIZE;i++)
	scanf("%d",&a[i]);
	for(i=0;i<SIZE;i++)
	printf("%d ",a[i]);
	
}

