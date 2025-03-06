#include<stdio.h>

void arr(int r,int c)
{
    int i,j,a[r][c];
    printf("Enter the array values:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int r,c;
    printf("Enter the row value :");
    scanf("%d",&r);
    printf("Enter teh column value :");
    scanf("%d",&c);
    arr(r,c);
    return 0;
}