#include<stdio.h>
int main()
{
	int a[10][10];
	int sum=0,i,j,n;
	printf("Enter the no of rows/columns:\n");
	scanf("%d",&n);
	printf("Enter the elements of matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element a[%d][%d]:\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			sum+=a[i][j];
			
		}
		
	}
	printf("Sum of diagonal Elements:%d",sum);
	return 0;
	
}
