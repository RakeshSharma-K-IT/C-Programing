#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the  number 1=");
    scanf("%d",&a);
    printf("Enter  the number 2=");
    scanf("%d",&b);
    printf("Enter the number 3=");
    scanf("%d",&c);

    if((a>b)&&(a>c))
    {
        printf("The Largest number is %d\n",a);

    }
    else if((b>c)){
        printf("The Largest number is %d\n",b);
    }
    else {
        printf("The Largest number is %d\n",c);
    }

    if ((a<b)&&(a<c))
    {
        printf("The Smallest number is %d\n",a);
    }
    else if (b<c)
    {
        printf("The Snallest number is %d\n",b);
    }
    else 
    {
        printf("The Smallest number is %d\n",c);
    }
    return 0;
}