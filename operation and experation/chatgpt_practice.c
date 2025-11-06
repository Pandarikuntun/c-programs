#include<stdio.h>
main(){
	int num;
	printf("enter the number :");
	scanf("%d",&num);
	if(num==0)
		printf("zero\n");
	else if(num<0)
		printf("negative\n");
	else
		printf("positive\n");
	switch(num%2){
		case 0: printf("even\n");break;
		case 1:printf("zero\n");
		case 0-1:printf("odd\n");break;
	}
	int i;
	for(i=0;i<10;i++){
		printf("sequence :%d",i);
		
	}
	
}
