#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the  a value =");
    scanf("%d",&a);
    printf("Enter the b value=");
    scanf("%d",&b);
    printf("The value of a==b && a<b is %d",(a==b)&&(a<b));
    printf("The value of a==b || a<=b is %d",(a==b)||(a<=b));
    printf("The value of !a>b is %d",!(a>b));
    return 0;
}