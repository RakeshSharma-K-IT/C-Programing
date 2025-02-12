#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the A value =");
    scanf("%d",&a);
    printf("Enter the B value =");
    scanf("%d",&b);
    printf("Enter the C value =");
    scanf("%d",&c);
    if((a>b)&& (a>c))
    {
        printf("The largest number is =%d",a);
    }
    else if (b>c)
    {
        printf("The ;argest number is =%d",b);
    }
    else {
        printf("The Largest number is =%d",c);
    }
}