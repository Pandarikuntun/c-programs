// addition of two numbers using functions
#include<stdio.h>
int sum(int a,int b){
	return a+b;;
}
main(){
	int a,b,c;
	printf("enter a and b values : ");
	scanf("%d %d",&a,&b);
	c=sum(a,b);
	printf("%d",c);
}
