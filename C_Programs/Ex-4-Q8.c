#include<stdio.h>
int main()
{
int n,i,a,d;
printf("Enter the number=");
scanf("%d",&n);
a=n;
while(n>=10)
{
n=n/10;
}
printf("The First number is = %d\n",n);

d=a%10;
printf("The Last digit is = %d \n",d);


printf("The  sum of first amd last Digit : %d",n+d);
return 0;
}