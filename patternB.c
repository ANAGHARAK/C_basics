#include<stdio.h>
int main()
{
	int n,i,j,sp,k;
	char ch;
	printf("Enter the number of lines: ");
	scanf("%d",&n);
	ch='A';
	sp=n-1;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=sp;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
		ch++;
		sp--;
	}
	return 0;
}
