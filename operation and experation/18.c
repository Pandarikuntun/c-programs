#include<stdio.h>
main(){
	int a=10;
	a=a++;
	a=a++ * a--;
	printf("%d\n",a);
	printf("%d\n",a++ *a++);
	
}
