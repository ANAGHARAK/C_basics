#include<stdio.h>
int main()
{
	int a[10][10];
	int count=0,i,j,n;
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
			if(a[i][j]==a[j][i])
			count+=1;
			
		}
    }
    if(count==(n*n))
    printf("Symmetric");
    else
    printf("Not Symmetric");
    return 0;
}
