#include<stdio.h>
int fact(int n);
int main(){
	int n1;
	printf("Enter a number:");
	scanf("%d",&n1);
	printf("THe factorial of %d is %d",n1,fact(n1));
	return 0;
}
int fact(int n){
	if(n==0 || n==1)
	return 1;
	else
	return n*fact(n-1);
}
