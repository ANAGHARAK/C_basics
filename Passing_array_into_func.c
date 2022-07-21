#include<stdio.h>
void sample(int *);
int main()
{
	int arr[5]={10,15,20,25,30};
	int n;
	sample(arr);
	for(n=0;n<5;n++)
	{
		printf("arr[%d]=%d\n",n,arr[n]);
	}
	return 0;
}
void sample(int *pnt)
{
	int n;
	for(n=0;n<5;n++)
	{
		*(pnt+n)=*(pnt+n)+100;
	}
}
