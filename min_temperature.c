#include<stdio.h>
void mintemperature(float t1,float t2,float t3)
{
	(t1<t2)?((t1<t3)?(printf("%f is min temperature",t1)):(printf("%f is min temperature",t3))):((t2<t3)?(printf("%f is min temperature",t2)):(printf("%f is min temperature",t3)));
}
int main()
{
	float t1,t2,t3;
	printf("Enter three temperatures: ");
	scanf("%f%f%f",&t1,&t2,&t3);
	mintemperature(t1,t2,t3);
	return 0;
}
