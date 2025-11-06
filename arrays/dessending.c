//descending of array elememts
#include<stdio.h>
main({
	int a[50],i,SIZE,temp,j;
	printf("Enter size ");
	scanf("%d",&SIZE);
	printf("Enter elements\n");
	for(i=0;i<SIZE;i++)
	scanf("%d",&a[i]);
for(i=0;i<SIZE-1;i++){
	for(j=i+1;j<SIZE;j++){
	if(a[i]<a[j]){
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	}
	printf("assendig order of array:\n");
	for(i=0;i<SIZE;i++)
	printf("%d ",a[i]);
	
}

