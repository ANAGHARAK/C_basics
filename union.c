#include<stdio.h>
union uJob{
	float salary;
	int workerNo;
}j;
int main()
{
	j.salary=12.3;
	j.workerNo=100;
	printf("Salary=%d",j.salary);
	printf("Worker no=%d",j.workerNo);
	return 0;
}
