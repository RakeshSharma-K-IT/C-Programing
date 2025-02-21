#include<stdio.h>
int main()
{
int n,i,a;
printf("Enter the number=");
scanf("%d",&n);
a=n;
while(n>=10)
{
n=n/10;
}
printf("The First number is = %d\n",n);


printf("The Last digit is = %d",a%10);
return 0;
}