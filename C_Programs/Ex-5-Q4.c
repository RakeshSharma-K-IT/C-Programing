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

printf("Printing Only Evenn numbers in an array:\n");

for(i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
        printf("%d \n",a[i]);
    }
}

return 0;
}
