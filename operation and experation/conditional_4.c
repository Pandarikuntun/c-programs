// given charector is consonent or vowel
#include<stdio.h>
main(){
	char x;
	printf("enter the charector :");
	scanf("%c",&x);
	//x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ||x=='A' || x=='E' || x=='I' || x=='O' || x=='U' ? printf("vowel") : printf("consonents");
	printf("%s",x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ||x=='A' || x=='E' || x=='I' || x=='O' || x=='U' ? "vowel" : "consonents");
}
