#include<stdio.h>
main(){
	int a=5,b=5;
	printf("%d %d\t",++a,b--);
	printf("%d %d\t",a,b);
	printf("%d %d\t",++a,b++);
	printf("%d %d\n",a,b);
}
