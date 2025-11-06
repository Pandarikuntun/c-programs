//without return type and without arguments
// prime or not 
#include<stdio.h>
void prime();
main(){
	prime();
}
void prime(){
	int x,i,count=0;
	printf("enter the number :");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		if(x%i==0)
		count++;
	}
/*	if(count==2)
	printf("%d is prime",x);
	else
	printf("%d is not prime",x);
*/
	count==2 ? printf("%d is prime",x):	printf("%d is not prime",x);
}
