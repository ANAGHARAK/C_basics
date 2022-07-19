#include<stdio.h>
int main() {
	int arr[10], sum=0,i;
	float avg;
	for(i=0;i<10;i++)
	{
		printf("Enter %d element of array\n",i+1);
		scanf("%d",&arr[i]);
	}
	printf("The array is \n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	avg=(float)sum/10;
	printf("\nThe sum and average of the elements of aray is %d and %f",sum,avg);
	return 0;
}
