//without return type and without arguments
//swap of two numbers with temp variable
#include<stdio.h>
int a,b;
void swap(){
	int temp;
	temp=a;
	//a=temp;
	a=b;
	b=temp;
	printf("after swaping a=%d b=%d\n",a,b);
}
main(){
	printf("enter tha a and b values :");
	scanf("%d%d",&a,&b);
	printf("before swaping a=%d b=%d\n",a,b);
	swap();		//caling
}

