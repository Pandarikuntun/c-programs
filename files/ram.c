// creat the file using the c 
#include<stdio.h>
main(){
	
	FILE *ptr=fopen("ram.txt","w");
	char s1[20];
	char s2[20];
	scanf("%s",s1);
	fprintf(ptr,"%s",s1);
	fclose(ptr);
	ptr=fopen("ram.txt","r");
	
}
