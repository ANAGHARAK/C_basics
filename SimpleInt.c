#include<stdio.h>
float getinterest(float,int,float);
int main()
{
    float pmt,roi,si;
    int tm;
    printf("Enter the principal amount,rate of interest and time: ");
    scanf("%f%f%d",&pmt,&roi,&tm);
    si=getinterest(pmt,tm,roi);
    printf("Simple Interest=%f",si);
    return 0;
    
}
float getinterest(float pmt,int tm,float roi)
{
    float sint;
    sint=(pmt*tm*roi)/100;
    return sint;
}