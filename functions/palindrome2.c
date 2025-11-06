// without return type and with arguments
//palindrom or not
#include<stdio.h>
void palindrom(int);
main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	palindrom(n);
//	palindrom(125);
	
}
void palindrom(int x){
	int r,sum=0,temp;
	temp=x;
	while(x>0){
		r=x%10;
		sum=sum*10+r;
		x/=10;
	}
	x=temp;
	x==sum ? printf("palindrom"):printf("not palindrom");
}
