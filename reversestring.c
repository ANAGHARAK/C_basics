#include<stdio.h>
void reverse(char s[100])
{
	int i,j;
	char temp;  
	i=0;
	j=strlen(s)-1;
	
	while(i<j)

{
	temp=s[i];
	s[i]=s[j];
	s[j]=temp;
	i++;
	j--;
	}
	
}
int main()
{
	char s[100];
	printf("Enter String=");
	scanf("%s",s);
	reverse(s);
	printf("Reversed string=%s",s);
	return 0;
	
}
