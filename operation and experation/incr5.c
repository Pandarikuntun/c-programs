#include<stdio.h>
main(){
	int x;
	printf("enter the x value : "); //5
	scanf("%d",&x);
	printf("%d\n",x++);	//5
	printf("%d\n",++x);	//7
	printf("%d\n",x--);	//7
	printf("%d\n",--x);	//5
}
