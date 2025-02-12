#include<stdio.h>
#include"sumofdigit.c"
int main()
{
    float p,n,r,s;
    printf("Entre the principle amount=");
    scanf("%f",&p);
    printf("Enter the rate of interest =");
    scanf("%f",&r);
    printf("Enter  the number of year=");
    scanf("%f",&n);
    s=(p*n*r)/100;
    printf("The Simple Interest is =%.2f",s);
    //printf("The Value of animal is %d",animal);
}