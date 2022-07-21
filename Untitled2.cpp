#include<stdio.h>
int sample(int *);
int main()
{
	int i,r;
	int arr[]={2,3,4,5,6};
	
	printf("The array is:\n");
	for(i=0;i<5;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	
	r=sample(arr);
	
	printf("The no of even elements are:%d\n",r);
	return 0;
	
}
int sample(int *pnt)
{
	int n,count=0;
	for(n=0;n<5;n++)
	{
		if(pnt[n]%2==0)
		count++;
	
	}
	return count;
}
