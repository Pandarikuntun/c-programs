// to understand the pointers program
#include<stdio.h>
main(){
	int x=5;
	float y=3.6;
	int *ptr=&x;
	float *ptr1=&y;
	printf("%d -- %u \n",x,ptr);
	printf("%f -- %u ",y,ptr1);
}
