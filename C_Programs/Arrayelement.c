// Program for to change the element is an array ;

#include<stdio.h>
int main()
{
    int i,n,r,j;
    printf("Enter the number of elements :");
    scanf("%d",&n);

    int a[n];

    printf("Enter the Array Values :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your entered values are:");
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    int s,v;
    printf("Do you want to change the values of the array( 1 for Yes and 0 for No) :");
    scanf("%d",&s);
    if(s)
    {   
       do
       {
        
        printf("Enter the index of the Array:");
        scanf("%d",&j);
        
        if(j<n){
            printf("The Updated Value is :");
            scanf("%d",&r);
            a[j]=r;
            for(i=0;i<n;i++)
            {
                printf("%d \n",a[i]);
            }
        }
        else {
            printf("Enter Correct Index number\n");
        }
        printf("Do you want to continue(1 or 0):");
        scanf("%d",&v);
       } while (v==1);
    }
    else {
        printf("Perfect Thing\n");
    }

    printf("Thank You !");
    return 0;

}