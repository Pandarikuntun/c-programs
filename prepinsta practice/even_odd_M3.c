// even or odd using bitwise operator
int isEven(int n){
	return (!(n&1));
}
main(){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	isEven(n) ? printf("even"): printf("odd");
}
