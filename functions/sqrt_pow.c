// powers and squres of a given number
#include<stdio.h>	//printf function and scanf pre defined in stdio.h 
#include<math.h>	//sqrt and power are pre defined in math.h
main(){
	int a,b=3;
	printf("enter a value :");
	scanf("%d",&a);
	printf("%.2f\n",sqrt(a));
	printf("%.2f",pow(a,b));
}
