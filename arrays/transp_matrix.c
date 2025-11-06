//transpose of trangle matrix
#include<stdio.h>
main(){
	int a[50][50],i,j,N,t[50][50];
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
		for(i=0;i<N;i++){			//transpose lazic
			for(j=0;j<N;j++){
				t[j][i]=a[i][j];
				}
			}
		printf("\ntranspose matrix is :\n");
			for(i=0;i<N;i++){
				for(j=0;j<N;j++){
				printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	}

