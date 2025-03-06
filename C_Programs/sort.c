#include<stdio.h>
int main()
{
    int a[5]={3,5,1,3,8},temp,i,j;
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d \t",a[i]);
    }
    printf("\n");
    int b=12,c=23;
    b=b|c;
    c=b|c;
    b=c|b;
    printf("THe value of a is %d\n",c);
    printf("the value of b is %d\n",b);
}