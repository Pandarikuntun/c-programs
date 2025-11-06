//string assending order
#include<stdio.h>
main(){
	char word[50];
	int i,l=0,temp,j;
	printf("enter a word :");
	gets(word);
	printf("%s",word);
	for(i=0;word[i]!='\0';i++)
	l++;
	printf("%d\n",l);
	for(i=0;i<l-1;i++){
		for(j=i+1;j<l;j++){
			if(word[i]>word[j]){
				temp=word[i];
				word[i]=word[j];
				word[j]=temp;
			}
		}
	}
	printf("%s",word);
}
