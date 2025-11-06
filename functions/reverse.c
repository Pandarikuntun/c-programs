// with return type and with arguments
// revers of a digits of a given integer
#include<stdio.h>
int revers_int(int x){
	int r,sum=0;
	while(x>0){
		r=x%10;
		sum=sum*10+r;
		x/=10;
	}
	return sum;
	
}
main(){
	int a,s;
	printf("enter the number :");
	scanf("%d",&a);
	s=revers_int(a);
	printf("%d",s);
}
