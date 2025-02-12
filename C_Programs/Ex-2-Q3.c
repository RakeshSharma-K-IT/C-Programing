#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number=");
    scanf("%d",&n);
    if(n==0)
    {
        printf("The number is Zero please enter Another number");
    }
    else if(n<0)
    {
        printf("The given nummber is Negative");
    }
    else if (n>0){
        printf("The given number is Positive ");
    }
}