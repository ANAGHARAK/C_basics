#include<stdio.h>

struct employee
{
  char Emp_name[20],Emp_Dept[20];
  int age,salary;

};
int main{
struct employee e[2];
int i;
char accounts,sales,marketing;
for(i=0;i<2;i++)
{
   printf("Enter the name of employee %d\n",i+1);
   scanf("%s",e[i].Emp_name);
   printf("Enter department\n");
   scanf("%s",e[i].Emp_Dept);
   printf("Enter age\n");
   scanf("%d",&e[i].age);
   printf("Enter salary\n");
   scanf("%d",&e[i].salary);

}
printf("Employees having salary less than 5000 are:\n");
for(i=0;i<2;i++)
{
  if(e[i].salary<5000)
  {
    printf("\n %s \t %s \t %d \t %d\n",e[i].Emp_name,e[i].Emp_Dept,e[i].age,&e[i].salary);
   }
  else
  {
    printf("none");
  }

}
return 0;
}
