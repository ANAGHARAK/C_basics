#include<stdio.h>
int divisible_by_6(int n);
int main()
{
	int num,div;
	printf("Enter a number: ");
	scanf("%d",&num);
	div=divisible_by_6(num);
	if(div==1)
	printf("Divisible by 6");
	else
	printf("Not Divisible by 6");
	return 0;
	
}
int divisible_by_6(int n)
{
	if(n%6==0)
	return 1;
	else
	return 0;
}
