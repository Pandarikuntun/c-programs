// without return type and without arguments
// vote for eligible or not
#include<stdio.h>
void eligible();
main(){
	eligible();
	eligible();
}
void eligible(){
	int x;
	printf("enter the number :");
	scanf("%d",&x);
	x>18 ? printf("eligible for voting\n"):printf("not eligible for voting\n");
}
