#include<stdio.h>
int main() {
	int n,i;
	float smallest;
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
	smallest=values[0];
	for(i=0;i<n;i++)
	{
		if(values[i]<smallest)
		{
			smallest=values[i];
		}
    }
    printf("\nThe smallest element of array is %f",smallest);
    float secsmall=values[0];
    int j;

    for(j=0;j<5;j++)
    {
    	if(values[j]==smallest)
    	j=j+1;
    	if(values[j]<secsmall)
    	secsmall=values[j];
    }
    
	 printf("\nThe sec smallest element of array is %f",secsmall);
    return 0;
}
		

