#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the a value=");
    scanf("%d",&a);
    printf("Enter the b value =");
    scanf("%d",&b);
    printf("The Addition result is %d \n",a+b);
    printf("The subraction Result is %d \n",a-b);
    printf("The Multiplication result is %d\n",a*b);
    printf("The Division Result is %f\n",(float)a/b);
    return 0;
}