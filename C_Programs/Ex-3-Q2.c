#include<stdio.h>
int main()
{
int n;
printf("Enter the number =");
scanf("%d",&n);
if(n>0)
{
printf("It is positive ");
}
else if(n<0)
{
printf("It is negative");
}
else if(n==0)
{
printf("The given number is 0");
}
else 
{
printf("Invalid");
}
return 0;
}
