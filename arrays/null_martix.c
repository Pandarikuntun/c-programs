//NULL matrix
#include<stdio.h>
main(){
	int a[50][50],i,j,N;
	printf("enter the size of matrix :");
	scanf("%d",&N);
	printf("enter the elements :\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("print the matrix :\n");
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		printf("\nNULL matrix is :\n");
			for(i=0;i<N;i++){
				for(j=0;j<N;j++)
				if(i==j)
				printf("0 ");
				else
				printf("0 ");
		printf("\n");
	}
	}

