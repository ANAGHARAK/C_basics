#include<stdio.h>
int main()
{
	char c[100]="Jerry";
	char d[100]="Lotus";
	char e[100]="Lotus";
	printf("Concatenate c and d =%s",strcat(c,d));
	printf("\nThe length of %s is %d",c,strlen(c));
	int r=strcmp(d,e);
	if(r==0)
	printf("\nTwo strings are equal");
	else
	printf("\ntwo strings are not equal");
	return 0;
}
