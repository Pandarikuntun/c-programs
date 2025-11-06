// addition of matrix
#include<stdio.h>
#define R 2
#define C 3
main()
{
	int a[R][C], b[R][C], c[R][C],i,j;
	printf("READ MATRIX1\n");
	printf("Enter elements\n");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%d",&a[i][j]);
	printf("MATRIX 1:\n");
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nREAD MATRIX2\n");
	printf("Enter elements\n");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%d",&b[i][j]);
	printf("\nMATRIX 2:\n");
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\nresultant of matrix :\n");
for(i=0;i<R;i++)
{
	for(j=0;j<C;j++)
	{
	c[i][j]=a[i][j]-b[i][j];
	printf("%d ",c[i][j]);
}
printf("\n");	
}
}

