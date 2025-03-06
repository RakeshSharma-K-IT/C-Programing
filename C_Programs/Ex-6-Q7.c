#include<stdio.h>
int main()
{
int i,j,r,c;

printf("Enter the row value=");
scanf("%d",&r);

printf("Enter the Column calue =");
scanf("%d",&c);
int a[r][c];
printf("Enter the Array values:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("Two Dimensional Array values \n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
int b[r],sum=0;

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum=sum+a[i][j];
}
b[i]=sum;
sum=0;
}
for(i=0;i<r;i++)
{
printf("%d\n",b[i]);
}


return 0;
}
