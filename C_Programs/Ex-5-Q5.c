//Printing all the input until the user enters 0;

#include<stdio.h>
int main()
{
    int i,n;
    printf("This code requires the input untill you give 0");

    while(i>0)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
    }
    return 0;
}
