#include<stdio.h>
union unionJob{
	char name[32];
	float salary;
	int workerNo;
}uJob;

struct structJob{
	char name[32];
	float salary;
	int workerNo;
}structJob;
int main(){
	printf("The size of union is %d bytes",sizeof(uJob));
	printf("\nThe size of structure is %d bytes",sizeof(structJob));
	return 0;
}
