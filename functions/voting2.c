// without return type and with arguments
//eligible for voting or not
void voting(int);
main(){
	int n;
	printf("enter the age :");
	scanf("%d",&n);
	voting(n);
	
}
void voting(int x){
	
	x>18 ? printf("eligible"):printf("not eligible");
}
