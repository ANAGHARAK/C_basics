#include<stdio.h>
int main(){
	int n;
	int i,j;
	printf("Enter the no of lines");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	return 0;
}
