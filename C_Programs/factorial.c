#include<stdio.h>
int main()
{
    int fact=1,i,n;
    printf("Enter the number to get Factorial =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The Factorial of the number is =%d",fact);
    return 0;
}