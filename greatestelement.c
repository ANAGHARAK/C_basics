#include<stdio.h>
int main() {
	int n,i;
	float biggest;
	float values[n];
	printf("Enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element of array\n",i+1);
		scanf("%f",&values[i]);
	}
	printf("The array is \n");
	for(i=0;i<n;i++)
	{
		printf("%f\t",values[i]);
	}
	biggest=values[0];
	for(i=0;i<n;i++)
	{
		if(values[i]>biggest)
		{
			biggest=values[i];
		}
    }
    printf("\nThe largest element of array is %f",biggest);
    return 0;
}
		

