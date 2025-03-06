#include<stdio.h>
int main()
{
int i,j,r,c;

//Initializing Row and Column values;
printf("Enter the row value=");
scanf("%d",&r);

printf("Enter the Column calue =");
scanf("%d",&c);

//Initializing Array values for MAtrix A 
int a[r][c];
printf("Enter the A Matrix array values :\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
//Printing Array values of Matrix A
printf("Two Dimensional Array values \n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}

//Initializing Array values of Matrix B
int b[r][c];
printf("Enter the B Matrix array values :\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}
//Printing Array Values of Matrix B
printf("Two Dimensional Array values \n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}

//Logic for two matrix Addition 
printf("The Addtion of two Matrix are :\n");
int d[r][c],s[r][c];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        d[i][j]=a[i][j]+b[i][j];
    }
}
//Printing result of Addition 
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d \t",d[i][j]);
    }
    printf("\n");
}

//Logic for two matrix Subraction 
printf("The Subraction of two Matrix are :\n");

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        if(a[i][j]>b[i][j])
        {
            s[i][j]=a[i][j]-b[i][j];
        }
        else if(b[i][j]>a[i][j])
        {
            s[i][j]=b[i][j]-a[i][j];
        }
        else {
            s[i][j]=a[i][j]-b[i][j];
        }
    }
}

//Printing the result for Subraction 
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",s[i][j]);
    }
    printf("\n");
}
return 0;
}