//without return type and without arguments
//vowel or consonent
#include<stdio.h>
void check();
main(){
	check();
}
void check(){
	char x;
	printf("enter the charector :");
	scanf("%c",&x);
	//x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'a' || x == 'e' ||x == 'i' || x == 'o' || x == 'u' ? printf("vowel"): printf("consonents");
	if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' || x == 'a' || x == 'e' ||x == 'i' || x == 'o' || x == 'u')
	printf("vowel");
	else
	printf("consonents");
}
