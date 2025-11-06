// difference of given two numbers
int diff(a,b){
	return a-b;
}
int sum(a,b){
	return a+b;
}
main(){
	int a,b,c,f;
	printf("enter the a and b values:");
	scanf("%d %d",&a,&b);
	c=diff(a,b);
	f=sum(a,b);
	printf("difference of two numbers :%d\ndifference of two no :%d ",c,f);
}
