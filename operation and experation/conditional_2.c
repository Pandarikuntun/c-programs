// gretest of three numbers 
#include<stdio.h>
main(){
	int x,y,z;
	printf("enter the x y z values :");
	scanf("%d %d %d",&x,&y,&z);
	//x>y && x>z ? printf("%d",x) : y>z ? printf("%d",y) :printf("%d",z);
	printf("gretest is %d",x>y && x>z ? x: y>z ? y : z);
}
