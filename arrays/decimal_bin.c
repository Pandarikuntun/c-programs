//convert decimal to binary

#include<stdio.h>
main()
{
	int a[32],i=0,n;
	printf("enter the decimal number :\n");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%2;
		n/=2; 
		i++;
	}
	printf("binary number is :\n");
	for(i=i-1;i>=0;i--)
	printf("%d",a[i]);
	
}
