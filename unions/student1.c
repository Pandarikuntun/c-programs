//details of student using the union
#include<stdio.h>
union student{
	char n[20];
	int r;
	int c;
	float m;
};
void dis(int c){
	if(c>5)
	printf("\nprimary school");
	else
	printf("\nhigh school");
}
int main(){
	printf("enter the student details\n");
	union student s1;
	scanf("%s%d%d%f",s1.n,&s1.r,&s1.c,&s1.m);
	printf("%s\t%d\t%d\t%f",s1.n,s1.r,s1.c,s1.m);
	dis(s1.c);
	return 0;
}

