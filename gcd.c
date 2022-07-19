#include<stdio.h>
int gcd(int m ,int n);
int main()
{
	int num1,num2,lcm,gcdv;
	printf("Enter two numbers:\n");
	scanf("%d%d",&num1,&num2);
	gcdv=gcd(num1,num2);
	lcm=(num1*num2)/gcdv;
	printf("GCD=%d  LCM=%d",gcdv,lcm);
	return 0;
}
int gcd(int m, int n)
{
	if(m<n)
	return gcd(n,m);
	if(n==0)
	return m;
	else
	return gcd(n,m%n);
}
