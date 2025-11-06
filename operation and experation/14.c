#include<stdio.h>
main(){
	int a=5,b=10,temp;
	temp=a,a=b,b=temp;
	printf("a=%d b=%d\n",a,b);
}
