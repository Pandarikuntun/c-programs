// gretest of two number 
#include<stdio.h>
main(){
	int x,y;
	printf("enter the two numbers x y :");
	scanf("%d %d",&x,&y);
	//printf("%d",x>y ? x : y);
	x>y ? printf("gretest is %d",x) : printf("gretest %d",y);
}
