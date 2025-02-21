#include<stdio.h>
int main()
{
int n,i,r;
printf("Enter the Table Bottom:");
scanf("%d",&n);
printf("Enter the table number:");
scanf("%d",&r);
for(i=1;i<=n;i++)
{
printf("%d * %d= %d\n",i,r,i*r);
}
return 0;
}