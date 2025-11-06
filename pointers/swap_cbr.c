//cal by referance
#include<stdio.h>
main(){
	int x,y;
	printf("enter the x and y values :\n");
	scanf("%d %d",&x,&y);
	printf("before calling :%d %d\n",x,y);
	value(&x,&y);
	printf("before calling :%d %d\n",x,y);
}
value(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("after calling : %d %d\n",*a,*b);
}
