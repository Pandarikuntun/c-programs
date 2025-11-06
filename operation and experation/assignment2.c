/* assignment operator
printing only one assignment operator using operation*/
#include<stdio.h>
main(){
	int x=100;
	x+=50;
	printf("%d\n",x);	//150
	x-=100;
	printf("%d\n",x);	//50
	x*=5;
	printf("%d\n",x);	//250
	x/=2;
	printf("%d\n",x);	//125
	x%=2;
	printf("%d\n",x);	//1
}
