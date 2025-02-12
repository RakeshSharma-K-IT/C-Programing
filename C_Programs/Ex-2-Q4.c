#include<stdio.h>
int main()
{
    int a,b,c;
    a=23;
    b=12;
    a=a^b;
    b=a^b;
    a=a^b;

    printf("The Value of A is =%d\n",a);
    printf("The value of b value is =%d",b);
    return 0;
}