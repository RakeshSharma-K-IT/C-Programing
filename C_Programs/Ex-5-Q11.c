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

float sum=0;

for(i=0;i<n;i++)
{
    sum+=a[i];

}
printf("The  Average of Array elements are= %.2f",sum/n);


return 0;
}