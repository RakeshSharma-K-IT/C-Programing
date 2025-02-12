#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the Celcius temperature =");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("The Farenheit degree= %.2f",f);
}