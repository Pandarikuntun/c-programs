#include<stdio.h>
#define R1 2
#define C1 3
#define R2 3
#define C2 2

main()
{
	int a[R1][C1], b[R2][C2], c[R1][C2],i,j,k;
	printf("READ MATRIX1 \n");
	printf("Enter elements\n");
	for(i=0;i<R1;i++)
	for(j=0;j<C1;j++)
	scanf("%d",&a[i][j]);
		printf("\nMATRIX 1:\n");
	for(i=0;i<R1;i++){
		for(j=0;j<C1;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nREAD MATRIX2 \n");
	printf("Enter elements\n");
	for(i=0;i<R2;i++)
	for(j=0;j<C2;j++)
	scanf("%d",&b[i][j]);
	printf("\nMATRIX 2:\n");
	for(i=0;i<R2;i++){
		for(j=0;j<C2;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	if(C1!=R2)
	printf("Mult not possible");
	else
	{
	printf("\nMult possible \n");
	printf("\nresultant of matrix :\n");
for(i=0;i<R1;i++)
{
	for(j=0;j<C2;j++)
	{
	c[i][j]=0;
	for(k=0;k<C1;k++)
	{
	c[i][j]+=a[i][k]*b[k][j];
}
printf("%d ",c[i][j]);
}
printf("\n");
}
}
}
