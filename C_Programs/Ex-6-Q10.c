//Program for Maximum in a column 
#include<stdio.h>
int main()
{
int i,j,r,c;

printf("Enter the row value=");
scanf("%d",&r);

printf("Enter the Column calue =");
scanf("%d",&c);
int a[r][c];
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

printf("The maximum in the column:\n");
for(j=0;j<c;j++)
{
int max=a[0][j];
for(i=0;i<r;i++)
{
if(a[i][j]>max)
{
max=a[i][j];
}
}
printf("%d\t",max);
}

return 0;
}
