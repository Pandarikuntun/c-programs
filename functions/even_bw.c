// with return type and with arguments
// print even numbers in b/w
#include<stdio.h>
int even(){
	int a,b,i;
	printf("enter tha first and last number :");
	scanf("%d%d",&a,&b);
	for(i=a+1;i<b;i++){
		if(i%2==0)	
printf("%d\t",i);		
	}
	
}
main(){
	even();
	
}

