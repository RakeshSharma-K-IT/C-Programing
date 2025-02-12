#include<stdio.h>
int main()
{
int a,b;
char d;
printf("Enter the number 1=");
scanf("%d",&a);
printf("Enter the number 2=");
scanf("%d",&b);
printf("Choose +,-,/,*");
//getchar();
scanf(" %c",&d);

switch(d)
{
case '+':
printf("The Addition Result is =%d",a+b);
break;
case '-':
printf("The Subraction result is =%d",a-b);
break;
case '*':
printf("Tyhe Multiplication result is =%d",a*b);
break;
case '/':
printf("The Division result is =%d",a/b);
break;
case '%':
printf("The Remainder result is =%d",a%b);
break;
default:
printf("Enter the valid Calculations");
break;
}
return 0;
}