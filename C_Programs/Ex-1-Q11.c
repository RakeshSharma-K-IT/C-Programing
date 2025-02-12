#include<stdio.h>

    int main()
    {
        int a,b,total;
        printf("Enter the Two Values:");
        scanf("%d %d",&a,&b);
        total=a+b;
        float percent=(float)a/total;
        printf("The Sum of %d and %d is %d \n",a,b,a+b);
        printf("The Percentage is %.2f",percent*100);
        return 0;
    }
