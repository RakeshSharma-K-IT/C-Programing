#include<stdio.h>
int main()
{
int n,sum=0,r;
printf("Enter the number =");
scanf("%d",&n);

while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("The Sum the number is =%d",sum);
return 0;
}
