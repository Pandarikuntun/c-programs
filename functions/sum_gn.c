// with return type and with arguments
// sum of given digits
#include<stdio.h>
int sum_gn(int x){
	int sum=0,r;
	while(x>0)
	{
	r=x%10;
	sum+=r;
	x/=10;
	}
while(sum>9)
{	
x=sum;
sum=0;
while(x!=0)
	{
	r=x%10;
	sum+=r;
	x/=10;
	}
}
	return sum;
}
main(){
	int c,x;
	printf("enter the number :");
	scanf("%d",&x);
	c=sum_gn(x);
	printf("%d",c);
}
