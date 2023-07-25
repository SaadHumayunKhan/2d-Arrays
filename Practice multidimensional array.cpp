#include<stdio.h>
#define rows 3
#define cols 3
int main()
{
	printf("enter the element of matrix:\n");
	int arr[rows][cols];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&arr[i][j]);
	}
	printf("............\n");
	for(int i=0;i<rows;i++)
	{
		{
			for(int j=0;j<cols;j++)
			printf("%2d",arr[i][j]);
		}
		printf("\n");
	}
	
}
