// Program to print Fibonacci series using for loop 

#include<stdio.h>
int main()
{
    int i,n,a,b;
    a=0;
    b=1;
    printf("Enter the   number=");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Enter the valid Number");
    }
    printf("The Fibonacci Number is \n");
    printf("%d-",a);
    for(i=1;i<=n;i++)
    {

            int fab=a+b;
            b=a;
            a=fab;
            printf("-%d",fab);

    }
   
}