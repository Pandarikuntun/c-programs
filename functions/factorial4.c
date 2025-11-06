// with return type and with arguments
// factorial of given numbers
#include<stdio.h>
int fact(){
	int x,i,fact=1;
	printf("enter the number :");
	scanf("%d",&x);
	while(x>0){
		fact*=x;
		x--;
	}
	return fact;
}
int main(){
	int result=fact();
	printf("%d",result);
	return 0;
}
