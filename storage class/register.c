/*Write a C program to show the use of a register
variable to store a loop counter for faster access.*/
#include<stdio.h>
int main(){
	register int i;
	
	for(i=0;i<10;i++)
	
	printf("%d ",i);
}

