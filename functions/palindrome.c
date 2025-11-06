// without return type and without arguments
//palindrom or not
#include<stdio.h>
void palindrome();
main(){
	palindrome();
	palindrome();
}
void palindrome(){
	int n,sum=0,r;
	printf("enter the number :");
	scanf("%d",&n);
	int temp=n;
	while(n>0){
		r=n%10;
		sum=sum*10+r;
		n/=10;
		}
	n=temp;
/*	if(temp==sum)
	printf("Palindrom\n");
	else
	printf("not palionrom\n");
*/
	temp==sum ? printf("palindrome\n"):printf("not palindrome\n");
}
