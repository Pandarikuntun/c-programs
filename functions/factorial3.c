// with return type and with arguments
// factorial
#include<stdio.h>
int factorial(int n){
	int i,fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	return fact;
}
main(){
	int y,x;
	printf("enter the value :");
	scanf("%d",&x);
	y=factorial(x);
	printf("%d",y);

}
