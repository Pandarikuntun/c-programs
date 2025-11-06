//print non repeated array elements
#include<stdio.h>
main(){
	int a[50],i,j,SIZE;
	printf("enter the Size of array");
	scanf("%d",&SIZE);
	printf("enter the elements :\n");
	for(i=0;i<SIZE;i++)
	scanf("%d",&a[i]);
	printf("printing the original array :\n");
	for(i=0;i<SIZE;i++)
	printf("%d ",a[i]);
	printf("\nnon repeating array :\n");
	
	
	for(i=0;i<SIZE;i++){
		int count=0;
		for(j=0;j<SIZE;j++){
			if(a[i]==a[j]){
				count++;
			}
			
		}
	if(count==1)
		printf("%d",a[i]);	
	}
	
	}
	
	

