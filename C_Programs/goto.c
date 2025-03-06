#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the n value :");
    scanf("%d",&n);
    if(n%2==0)
    {
        goto label1;
    }
    else 
    {
        goto label2;
    }
    label1:
        printf("It is even");
        return 0;
    label2:
        printf("It is odd");
        return 0;

    return 0;
}