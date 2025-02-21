#include<stdio.h>
int main()
{
int i;
printf("All odd number between 1 to 100  ");
for (i=0;i<=100;i++)
{
if(i%2==1)
{
printf("%d \n",i);
}
}
return 0;
}