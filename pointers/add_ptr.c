//ADDITION OF INTEGER TO POINTER
#include<stdio.h>
main(){
	int x,y,z;
	printf("enter the x and y values :");
	scanf("%d %d",&x,&y);
	int *ptr_x=&x;
	int *ptr_y=&y;
	int *ptr_z=&z;
	*ptr_z=*ptr_x+*ptr_y;
	printf("z is addition of two numbers :\n\n");
	printf("x= %d - ptr_x= %d\ny= %d - ptr_y= %d\nz= %d - ptr_%d",x,ptr_x,y,ptr_y,z,ptr_z);
	
	
}
