#include<stdio.h>
int main()
{
int a;
printf("Enter your age =");
scanf("%d",&a);
if((a>=18)&&(a<=100))
{
printf("You are Eligible for vote");
}
else {
printf("Your are not eligible for vote ");
}
return 0;
}