//reverse of string
#include<stdio.h>
main(){
	char word[50];
	int i,l=0,temp;
	printf("enter a string or name :");
	scanf("%s",word);
	printf("straight word :%s\n",word);
	for(i=0;word[i];i++)
	l++;
	for(i=0;i<l/2;i++){
		temp=word[i];
		word[i]=word[l-i-1];
		word[l-i-1]=temp;
	}
	printf("reverse word :%s\n",word);
}
