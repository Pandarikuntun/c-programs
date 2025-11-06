// with return type and with arguments
//swaping of two numbers with temp variable
#include<stdio.h>
int swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swaping a=%d b=%d ",a,b);
	return 0;
	
}
int main(){
	int a,b;
	printf("enter the a b values :");
	scanf("%d%d",&a,&b);
	printf("before swaping a=%d b=%d\n",a,b);
	swap(a,b);
}
