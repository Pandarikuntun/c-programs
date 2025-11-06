// without return type and with arguments
// even or odd 
#include<stdio.h>
void eo(int);
main(){
	int x;
	printf("enter the number :");
	scanf("%d",&x);
	eo(x);
	eo(5);
}
void eo(int n){
	n%2==0 ? printf("even\n"):printf("odd\n");
}

