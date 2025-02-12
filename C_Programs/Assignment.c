#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the a value =");
    scanf("%d",&a);
    printf("enter the b value =");
    scanf("%d",&b);
    printf("The  value  of add assignment= %d",a+=a);
    printf("The value of Subraction  = %d",a-=a);
    printf("the value of multiplication = %d",a*=a);
    printf("The value of Division =%d",a/=a );
    getch();

}