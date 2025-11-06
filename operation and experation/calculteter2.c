/* Write a C program to create a simple calculator that can 
add, subtract, multiply, and divide two numbers entered by the user */
#include<stdio.h>
int main(){
	int a,b;
	float c;
	printf("enter the a and b values :");
	scanf("%d%d",&a,&b);
	printf("addtion of a=%d and b=%d a+b=%d\n",a,b,a+b);
	printf("addtion of a=%d and b=%d a+b=%d\n",a,b,a-b);
	printf("addtion of a=%d and b=%d a+b=%d\n",a,b,a*b);
	if(b==0)
	printf("division not possible");
	else{
	c=(float)a/b;
	printf("addtion of a=%d and b=%d a+b=%.2f\n",a,b,c);	
	}
	return 0;
}

