#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of elements =");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

printf("Entered Array elements are =");

for(i=0;i<n;i++)
{
    printf("%d \n",a[i]);
}

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("The First Even number in an array is %d",a[i]);
            break;
        }
    }
    return 0;
}