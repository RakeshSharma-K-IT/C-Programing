#include<stdio.h>
int main()
{
int a=0,b=1,i,n;
printf("Enter the number :");
scanf("%d",&n);


if(n==0)
{
printf("0");
}
if(n<=2)
{
printf("0-1");
}
if(n>2)
{
printf("0");
for(i=2;i<n;i++)
{
a=a+b;
b=a-b;
printf("-%d",a);
}
}
return 0;
}