#include<stdio.h>
main()
{
	int a[32]={0},i=0,n;
	printf("enter the decimal number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i]=n%2;  
			n/=2;  
	i++;  
	}
	printf("binary number :\n");
	for(i=31;i>=0;i--)
	printf("%d",a[i]);	
}

