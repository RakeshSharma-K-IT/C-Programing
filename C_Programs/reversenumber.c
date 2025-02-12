//Program to Reverse the number using while Loop 

#include<stdio.h>
int main()
{
    int r=0,s,n,i;
    printf("Enter  the number =");
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        s=n%10;
        r=r*10+s;
        n=n/10;
        i++;
    }
    printf("The reversed number is %d",r);
    return 0;
}