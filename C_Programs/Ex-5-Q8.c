//Program print The maximum and minimum number in an array

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

printf("The Maximum number in this array is \t");

int max=a[0];
for(i=0;i<n;i++)
{
    if(max<a[i])
    {
        max=a[i];
    }
}
printf("%d \n",max);

printf("The Minimum number in an array ");
int min=a[0];
for(i=0;i<n;i++)
{
    if(a[i]<min)
    {
        min=a[i];
    }
}

printf("%d",min);
return 0;

}
