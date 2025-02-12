#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number1=");
    scanf("%d",&a);
    printf("Enter the  number2=");
    scanf("%d",&b);
    c=a+b;
    if(c%5==0)
    {
        printf("It is divisible by 5");

    }
    else
    {
        printf("It is not divisible by 5");
    }
}