#include<stdio.h>
int main() {
	int arr[10];
	int i;
	int find;
	
	for(i=0;i<10;i++)
	{
		printf("Enter %d element of array\n",i+1);
		scanf("%d",&arr[i]);
	}
	
    printf("enter the value you want to find");
    scanf("%d",&find);
	for(i=0;i<10;i++)
	{
		if(arr[i]==find)
		{
			printf("Found at location %d",i+1);
			break;
		}
    }
    if(i==10)
    printf("No such value found in the array");
    
    return 0;
}
		

