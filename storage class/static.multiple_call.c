/*Write a C program using a static variable inside a function to demonstrate
how it preserves its value across multiple function calls.*/
#include<stdio.h>
void number(){
	static int x=10;
	printf("%d\n",x);
	x++;
}
main(){
	number();
	number();
	number();
}
