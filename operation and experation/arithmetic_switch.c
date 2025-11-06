// arithmetic calculation using switch 
#include<stdio.h>
main(){
	int a,b,choice;
	printf("enter the integers a,b :");
	scanf("%d %d",&a,&b);
	printf("a=%d b=%d\n",a,b);
	printf("1 for the addition\n2for substraction\n3for the multiplication\n4 for division\n \nenter the which operation you can do :");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("sum is :%d",a+b);
			break;
		case 2:
			printf("difference is :%d",a-b);
			break;
		case 3:
			printf("product is :%d",a*b);
			break;
		case 4:
			printf("questint :%d\nremainder :%d",a/b,a%b);
			break;
		defalt:
			printf("you enterd wrong choice");
	}
}
