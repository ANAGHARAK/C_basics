#include<stdio.h>
struct employee{
	char name[10];
	float salary;
	char id[10];
	
};

int main(){
	struct employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter employee %d details",i+1);
		printf("\nName: ");
		scanf("%s", &e[i].name);
		printf("\nSalary: ");
		scanf("%f", &e[i].salary);
		printf("\nID: ");
		scanf("%s", &e[i].id);
	}
	return 0;
}
