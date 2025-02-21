#include<stdio.h>
int main()
{
    int p,n,r,t;

    printf("Enter the principle amount=");
    scanf("%d",&p);
    printf("Enter the value of rate of interest=");
    scanf("%d",&r);
    printf("Enter the number of year=");
    scanf("%d",&n);
    printf("The simple Interest is = %d",(p*n*r)/100);
    return 0;
}