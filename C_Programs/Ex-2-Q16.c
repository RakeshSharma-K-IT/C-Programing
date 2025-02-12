#include<stdio.h>
#include<math.h>
int main()
{
    int n,r;
    printf("Enter the number to determine the number is perfect square or not =");
    scanf("%d",&n);
    r=n/sqrt(n);
    if(r==sqrt(n))
    
    {
        printf("It is a perfect square ");
    }
    else {
        printf("It is not a perfect square");
    }
}