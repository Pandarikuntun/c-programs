//without return type and without arguments
//given number is even or odd
#include<stdio.h>
void display();
main(){
	display();
}
void display(){
	int x;
	printf("enter a number :");
	scanf("%d",&x);
/*	if(x%2==0)
	printf("even");
	else
	printf("odd");
*/
	x%2==0 ? printf("even"):printf("odd");
}
