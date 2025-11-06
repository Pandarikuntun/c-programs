//gretest of three numbers using if else under if else statements 
#include<stdio.h>
main(){
	int x,y,z;
	printf("enter the values of x,y,z :");
	scanf("%d %d %d",&x, &y, &z);
	if(x>y)
	printf("%d is greter value :",x);
	else{
		if(y>z)
		printf("%d is greter",y);
		else
		printf("%d is greter",z);
	}

}
