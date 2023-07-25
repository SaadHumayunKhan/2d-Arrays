#include<stdio.h>
#define rows 3
#define cols 3

void input(int a[rows][cols])
{
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&a[i][j]);
	}
}
void print(int a[rows][cols])
{
	for(int i=0;i<rows;i++)
	{
	{
		for(int j=0;j<cols;j++)
		printf(" %d ",a[i][j]);
	}
	printf("\n");
    }
}

void sum(int a[rows][cols],int b[rows][cols])
{
	printf("sum of both matix is:\n");
	int sum=0;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
		sum= a[i][j]+b[i][j];
		printf(" %d ",sum);
	}
	printf("\n");
    }
}
int main()
{
	int a[rows][cols], b[rows][cols];
	printf("enter first element matrix:\n");
	input(a);
	printf("............\n");
	print(a);
	printf("enter second matrix element:\n");
	input(b);
	printf("\n............\n");
	print(b);
	
	sum(a,b);
}
