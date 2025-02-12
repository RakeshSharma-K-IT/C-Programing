#include<stdio.h>
int main()
{
int a,i;
printf("Enter the number for factorial=");
scanf("%d",&a);

for(i=1;i<a;i++)
{
a=a*i;
}
printf("The factorial of the number =%d",a);
return 0;
}