#include<stdio.h>
int transpose(int a[3][3]);

int main()
{
	int a[3][3]={
	{10,20,30},
	{1,2,3},
	{6,7,8}
	};
    int i,j;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",a[i][j]);
		}
	    printf("\n");
	    
	}
	transpose(a);
	return 0;
}
int transpose(int a[3][3]){
	int b[3][3]; 
	int i,j;
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		b[i][j]=a[j][i];
		}
	    
	    
	}
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",b[i][j]);
		}
	    printf("\n");
	    
	}
}
