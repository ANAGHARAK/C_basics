#include<stdio.h>
void mintemperature(float t1,float t2,float t3)
{
	if(t1<t2)
	{
		if(t1<t3)
		printf("%f is min temp",t1);
		else
		printf("%f is min temp",t3);
	}
	else
	{
		if(t2<t3)
		printf("%f is min temp",t);
		else
		printf("%f is min temp",t3);
	}
	
}
int main()
{
	float t1,t2,t3;
	printf("Enter three temperatures: ");
	scanf("%f%f%f",&t1,&t2,&t3);
	mintemperature(t1,t2,t3);
	return 0;
}
