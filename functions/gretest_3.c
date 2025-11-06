// with return type and with arguments
//gretest of three numbers
#include<stdio.h>
int gretest_3(int x,int y,int z){
	//int a=(x>y) && (x>z) ? printf("%d is greter",x) : (y>z) ?printf("%d is gretest",y) :printf("%d is gretest",z);
	if((x>y) && (x>z))
	printf("%d is greter",x);
	else if(y>z)
	printf("%d is gretest",y);
	else
	printf("%d is gretest",z);
	return 0;	//a;
}
main(){
	int x,y,z;
	printf("enter the three values :");
	scanf("%d %d %d",&x,&y,&z);
	gretest_3(x,y,z);
}


