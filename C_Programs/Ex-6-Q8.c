//program for getting maximum of 2d array ;
#include<stdio.h>
int main()
{
int i,j,r,c;

printf("Enter the row value=");
scanf("%d",&r);

printf("Enter the Column value =");
scanf("%d",&c);
int a[r][c];

printf("Enter the array values :\n");

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

printf("Maximum of element in the array :\n");
int max=a[0][0];

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]>max)
{
max=a[i][j];
}
}
}
printf("%d\n",max);
return 0;
}
