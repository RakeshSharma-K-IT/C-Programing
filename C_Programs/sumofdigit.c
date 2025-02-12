//Program to print the Sum of the Digit;

#include<stdio.h>
static int animal=8;
int main()
{
    int n,r=0,s,i;
    printf("Enter  the  number=");
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        s=n%10;
        r=r+s;
        n=n/10;
        i++;
    }
    printf("The Sum of the Digit is given by %d",r);
    return 0;
}