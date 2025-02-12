#include<stdio.h>
int main()
{
    int a=12;
    float b=1.3;
    char c='S';
    double d=13.234224556;
    printf("The Size of the integer is %d \n",sizeof(a));
    printf("The Size of Float is %d \n",sizeof(b));
    printf("The Size of Character is %d \n",sizeof(c));
    printf("The Size of Double is %d \n",sizeof(d));
    return 0;
}