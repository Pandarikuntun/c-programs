/*Write a C program to find the sum of even and odd elements in an array of size N.
Example:
Input: 1 2 3 4 5
Output:
Sum of even elements = 6
Sum of odd elements = 9
*/
#include<stdio.h>
int main(){
	int n,a[50],sum=0,i,sum1=0;
	printf("enter the size :");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}for(i=0;i<n;i++)
	if(a[i]%2==0){
		sum +=a[i];
		
	}
	else
	{
		sum1+=a[i];
	}
	printf("\neven sum %d",sum);
printf("\nodd sum %d",sum1);
}
