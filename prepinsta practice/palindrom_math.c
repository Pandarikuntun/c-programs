// palindrome 
#include<stdio.h>
main(){
	int num,rev=0,rem,temp;
	printf("enter a number :");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
	
		rem=temp%10;
		rev=rev * 10 + rem;
		temp/=10;
	}
	if(num==rev)
	printf("%d is palindrome",num);
	else
	printf("%d is not a palindrome",num);
	
}
