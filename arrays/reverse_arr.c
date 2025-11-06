#include<stdio.h>
main()
{
	int a[50],i,SIZE,temp;
	printf("Enter size ");
	scanf("%d",&SIZE);
	printf("Enter eliments \n");
	for(i=0;i<SIZE;i++)
	{
	scanf("%d",&a[i]);
	}
for(i=0;i<SIZE/2;i++)
{
	temp=a[i];
	a[i]=a[SIZE-i-1];
	a[SIZE-i-1]=temp;
}
printf("reverse of array \n");
		for(i=0;i<SIZE;i++)
	printf("%d ",a[i]);
	
}
