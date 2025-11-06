//without return type and with arguments
//swap of two numbers with temp variable
#include<stdio.h>
void swap(int a, int b, int temp){
	temp=a;
	a=b;
	b=temp;
	printf("ofter swaping a=%d b=%d",a,b);
}
main(){
	int a,b,temp;
	printf("enter the a and b values :");
	scanf("%d%d",&a,&b);
	printf("before swaping a=%d b=%d\n",a,b);
	swap(a,b,temp);
}
