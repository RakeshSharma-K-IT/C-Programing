#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
printf("Enter the number =");
scanf("%d",&a);

printf("Choose square, cubic, square root,1,2,3 =");
scanf("%d",&b);

switch (b)
{
case 1:
printf("The Square of the number =%.2f",pow(a,2));
break;
case 2:
printf("The Cude of the number =%.2f",pow(a,3));
break;
case 3:
printf("The Square root of number =%.2f",sqrt(a));
break;
default:
printf("Choose Properly ");
break;
}
return 0;
}