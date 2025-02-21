#include<stdio.h>
int main()
{
int n,rev=0,r,t;
printf("Enter the number =");
scanf("%d",&n);
t=n;
while(n>0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}

if(t==rev)
{
printf("It is Palindrome number");
}
else{
printf("It is not a palindrome");
}
return 0;
}