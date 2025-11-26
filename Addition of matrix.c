#include<stdio.h>
int main()
{
	int a[15][15],b[10][10],add[10][10],r,c,i,j;
	printf("Enter Rows and coloumn values");
	scanf("%d %d",&r,&c);
	printf("Enter A matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter B matrix values ");
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Addition of matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",add[i][j]);
		}
	}
	printf("\n");
	return 0;
}
