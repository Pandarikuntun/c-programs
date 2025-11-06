// without return type and with arguments
//consonent or vowel
#include<stdio.h>
void conso_vo(char);
main(){
	char x;
	printf("enter the charecter :");
	scanf("%c",&x);
	
	conso_vo(x);		// calling
}
void conso_vo(char k){
	k=='a' || k=='e' || k=='i' || k=='o' || k=='u' || k=='A' || k=='E' || k=='I' || k=='O' || k=='U' ? printf("vowel"):printf("comnsonents");
}
