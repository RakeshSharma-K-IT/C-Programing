#include<stdio.h>
int main()

{
    int a,b,c;
    printf("Enter the three lenght of value=");
    scanf("%d %d %d",&a,&b,&c);
    if((a==b)&&(a==c)&&(b==c))
    {
        printf("It is Equilateral Triangle ");
    }
    else if ((a==b)||(a==c)||(b==c))
    {
        printf("It is isoceles triangle ");
    }
    else {
        printf("It is scalene triangle ");
    }
}