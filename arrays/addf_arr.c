//ADDITION OF INTEGER TO POINTER
#include<stdio.h>
main(){
	float x,y,z;
	printf("enter the x and y values :");
	scanf("%f %f",&x,&y);
	float *ptr_x=&x;
	float *ptr_y=&y;
	float *ptr_z=&z;
	*ptr_z=*ptr_x+*ptr_y;
	printf("z is addition of two numbers using float:\n\n");
	printf("x= %f - ptr_x= %u\ny= %f - ptr_y= %u\nz= %f - ptr_z=%u",x,ptr_x,y,ptr_y,z,ptr_z);
	
	
}
