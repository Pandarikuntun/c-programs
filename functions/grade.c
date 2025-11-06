// with return type and with arguments
// student grade >500 is pass other wise fail
#include<stdio.h>
char grade(float x){
	if(x>800)
	return 'A';
	else if(x<800 && x>=700)
	return 'B';
	else if(x<700 && x>=600)
	return 'C';
	else if(x<600 && x>=500)
	return 'D';
	else
	return 'F';
}
main(){
	int f;
	printf("enter the marks :");
	scanf("%d",&f);
	printf("%c\n",grade(f));
}
