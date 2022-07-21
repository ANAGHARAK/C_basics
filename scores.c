#include<stdio.h>
void first(int s1,int s2,int s3,int b)
{
	float avg,sr;
	int sum;
	avg=(float)(s1+s2+s3)/3;
	printf("Average= %f",avg);
	sum=s1+s2+s3;
	sr=(float)sum*100/b;
	printf("\nStrike Rate=%f",sr);
	void second(int s1,int s2,int s3)
	{
	    if(s1<s2)
	{
		if(s1<s3)
		printf("\n%d is smallest score",s1);
		else
		printf("\n%d is smallest score",s3);
	}
	else
	{
		if(s2<s3)
		printf("\n%d is smallest score",s2);
		else
		printf("\n%d is smallest score",s3);
	}
	
	}
	second(s1,s2,s3);
}

int main()
{
	int s1,s2,s3,b;
	printf("Enter the three scores: \n");
	scanf("%d%d%d",&s1,&s2,&s3);
	printf("Enter the total no of balls played: \n");
	scanf("%d",&b);
	first(s1,s2,s3,b);
	return 0;
}


