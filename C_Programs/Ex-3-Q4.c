#include<stdio.h>
int main()
{
int m;
printf("Enter your mark=");
scanf("%d",&m);
if((m>=90)&&(m<=100)){
printf("Grade:A");
}
else if ((m<=89)&&(m>=80))
{
printf("Grade:B");
}
else if((m<=79)&&(m>=70))
{
printf("Grade C");
}
else if(m<70)
{
printf("Grade : Fail");
}
else {
printf("Enter the valid mark");
}
return 0;
}