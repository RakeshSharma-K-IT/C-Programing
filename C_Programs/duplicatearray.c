//Printing the Duplicate values;

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of arrays :");
    scanf("%d",&n);
    int a[n];
    int count=0;

    printf("Enter the values of arrays:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]){
                count+=1;
                printf("a[%d] is %d and a[%d] is %d \n",i,a[i],j,a[j]);
            }
            
        }
   
    }
    printf("COunt %d",count);
}