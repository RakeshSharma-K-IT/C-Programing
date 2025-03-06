#include<stdio.h>
int main()
{
int i,j,r,k,c;

//Initializing Row and Column 
printf("Enter the row value=");
scanf("%d",&r);

printf("Enter the Column calue =");
scanf("%d",&c);

//Initialing Array values of matrix A
printf("Enter the Array values :\n");
int a[r][c];
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
printf("Enter the Array values :\n");
int b[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&b[i][j]);
}
}

//Printing Array values of matrix B
printf("Two Dimensional Array values \n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}

//Initializing new array as 0 for matrix Multiplication 
int d[r][c];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        d[i][j]=0;
    }
}
//Logic for Matrix Multiplication 
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
for(k=0;k<r;k++)
{
d[i][j]=d[i][j]+a[i][k]*b[k][j];
}
}
}
//Printing the matrix Multiplication Values 
printf("The multiplication of the matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",d[i][j]);
}
printf("\n");
}

return 0;
}

