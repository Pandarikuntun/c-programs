// without return type and with arguments
// prime or not
#include<stdio.h>
void prime(int);
main(){
	int x;
	printf("enter the number :");
	scanf("%d",&x);
	prime(x);	//calling
}
void prime(int n){
	int i,count=0;
	for(i=1;i<=n;i++){
		if(n%i==0)
		count++;
	}
	count==2 ? printf("prime") : printf("not prime");
	
}
