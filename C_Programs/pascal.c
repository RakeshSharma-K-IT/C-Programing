#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter how many line to print :");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++)
        {
            printf("* \t");
        }
        printf("\n");
    }
}