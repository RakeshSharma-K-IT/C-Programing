#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the n value :");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        if(i==n)
        for(j=0;j<n;j++)
        {
            
            if(j==0 || j==n-1){
                printf("%d",n);
            }
            printf("%d",i);

        }
        printf("\n");
        if(i<n)
        {
            for(i=0;i<n;i++)
            {
                if(i=0 || i==n-1){
                    printf("%d",n);
                }
                printf("%d",n-1);
            }
        }
    }
}