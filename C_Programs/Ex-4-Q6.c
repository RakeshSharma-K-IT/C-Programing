#include<stdio.h>
int main()
{
int count=0,n,i;
printf("Enter any number =");
scanf("%d",&n);

for(i=0;n>0;i++)
{
count+=1;
n=n/10;
}
printf("The number of digit is %d",count);
return 0;
}