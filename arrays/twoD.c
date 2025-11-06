// read and write the matrix
#include<stdio.h>
main()
{
	int a[50][50],i,j,R,C;
	printf("enter the rows :\n");
	scanf("%d",&R);
	printf("enter the coloumns :\n");
	scanf("%d",&C);
	printf("Enter elements ");
	for(i=0;i<R;i++)
	for(j=0;j<C;j++)
	scanf("%d",&a[i][j]);
	printf("matrix is \n");
	for(i=0;i<R;i++)
	{
	for(j=0;j<C;j++)
	printf("%d ",a[i][j]);
	printf("\n");
}
}


