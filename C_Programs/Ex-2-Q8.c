#include<stdio.h>
int main()
{
    int a;
    printf("Enter you mark=");
    scanf("%d",&a);
    if((a<=100)&&(a>=90))
    {
        printf("A Grade");
    }
    else if((a<=89)&&(a>=80))
    {
        printf("B Grade");
    }
    else if((a<=79)&&(a>=70))
    {
        printf("C Grade");
    }
    else if((a<=69)&&(a>=60))
    {
        printf("D Grade");
    }
    else if((a<=59)&&(a>=0))
    {
        printf("F Grade");
    }
    else {
        printf("Enter the valid mark");
    }
    return 0;
}