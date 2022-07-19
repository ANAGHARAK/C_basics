#include<stdio.h>
int checkPrimeNo(int n);
int main(){
	int n1,flag;
	printf("Enter a number: ");
	scanf("%d",&n1);
	flag=checkPrimeNo(n1);
	if(flag==1)
	printf("The number is not prime");
	else
	printf("Its a prime number");
	
	return 0;
	
}
int checkPrimeNo(int n){
	if(n==0 || n==1)
	return 1;
	
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		return 1;
		else 
		return 0;
	}
}
