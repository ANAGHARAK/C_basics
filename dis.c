#include<stdio.h>
int main(){
	int qty,dis;
	float tot,rate;
	printf("Enter rate and quantity\n");
	scanf("%d",&qty);
	scanf("%f",&rate);
	if(qty>1000)
	{dis=10;
    tot=(rate*qty)-(rate*qty*dis/100);
	}
	else
	{
		dis=0;
	  tot=(rate*qty);
		
	}
	//tot=(rate*qty)-(rate*qty*dis/100);
	printf("total expense= Rs. %f\n",tot);
	return 0;
	
}
