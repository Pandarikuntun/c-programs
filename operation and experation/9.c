#include<stdio.h>
main(){
	int a=15,b=13,c=16,x,y;
	x=a-3%2+c*2/4%2+b/4;			///preseding of operators
	y=a=b+5-b+9/3;
	printf("x=%d,y=%d\n",x,y);
}
