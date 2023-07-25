#include<stdio.h>
#define rows 3
#define cols 3

int main()
{
	int sum=0;
	printf("enter a matrix:\n");
	int a[rows][cols];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		scanf("%d",&a[i][j]);
	}
	
	
	printf("enter matrix is:\n");
	for(int i=0;i<rows;i++){
	{
		for(int j=0;j<cols;j++)
		printf("%2d ",a[i][j]);
	}
	printf("\n");
    }
    
    
    printf("the reverse diognal in the matrix is:\n");
    for(int i=0;i<rows;i++)
    {
    	printf("%d\n",a[i][2-i]);    //for not reverse just replace 2-i by i 
    	sum+=a[i][2-i];
	}
	
	
	printf("the sum of reverse diognal in the matrix is:%d",sum);
}
