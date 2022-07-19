#include<stdio.h>
struct employee{
	char Emp_name[10], Emp_Dept[20];
	int age,salary;
	
};
int main()
{
	struct employee e[6];
	int i;
	char ch[10]="ACCOUNTS";

	for(i=0;i<6;i++)
	{
		printf("Enter employee %d details(IN CAPITAL LETTERS ONLY)",i+1);
		printf("\nName:");
		scanf("%s",&e[i].Emp_name);
		printf("Name of Department:");
		scanf("%s",&e[i].Emp_Dept);
		printf("Age:");
		scanf("%d",&e[i].age);
		printf("Salary:");
		scanf("%d",&e[i].salary);
		
	}
	for(i=0;i<6;i++)
	{
		if(e[i].salary<5000 && (strcmp(e[i].Emp_Dept,ch)==0))
		{
			printf("\n %s %s %d %d",e[i].Emp_name,e[i].Emp_Dept,e[i].age,e[i].salary);
		}
	}
	return 0;
}