#include<stdio.h>
int power(int m,int n);
int main(){
	int m,n,pow;
	printf("Enter the base: ");
	scanf("%d",&m);
	printf("Enter the power: ");
	scanf("%d", &n);
	pow=power(m,n);
	printf("%d^%d= %d",m,n,pow);
	return 0;
	
}

int power(int m,int n){
	if(m==0)
	return 0;
	if(n==0)
	return 1;
	else
	return m*power(m,n-1);
	
}

