#include<stdio.h>
int sum(int n);
int main(){
	int n1,result;
	printf("Enter a number:");
	scanf("%d",&n1);
	
	result=sum(n1);
	printf("sum=%d",result);
	return 0;
	
}

int sum(int n){
	if(n==0)
	return 0;
	else
	return n+sum(n-1);
	
}
