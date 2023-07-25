#include<stdio.h>
#define rows_a 3
#define cols_a 2
#define cols_b 2

void multiply(int a[][cols_a],int b[][cols_b],int c[][cols_b])
{
	for(int i=0;i<rows_a;i++)
	{
		for(int j=0;j<cols_b;j++)
		{
		c[i][j]=0;
		for(int k=0;k<cols_a;k++)
		{
		c[i][j]+=a[i][k]*b[k][j];
	    }
	    }
	}
}
int main()
{
	int a[rows_a][cols_a], b[cols_a][cols_b], c[rows_a][cols_b];
	printf("enter the elements of matrix A:\n");
	for(int i=0;i<rows_a;i++)
	{
		for(int j=0;j<cols_a;j++)
		scanf("%d",&a[i][j]);
	}
    printf("enter the elements of matrix B:\n");
	for(int i=0;i<cols_a;i++)
	{
		for(int j=0;j<cols_b;j++)
		scanf("%d",&b[i][j]);
	}
	multiply(a,b,c);
	printf("multiply of matrix A and B is:\n");
	for(int i=0;i<rows_a;i++)
	{
		for(int j=0;j<cols_b;j++)
		printf("%2d ",c[i][j]);
		printf("\n");
	}
	
}
