#include<stdio.h>
int main() 
{
    int a[3][3]={{1,2,3},{4,5,6},{1,2,3}};

    int r=sizeof(a)/sizeof(a[0]);
    int c=sizeof(a[0])/sizeof(a[0][0]);

    if(r==c)
    {
        printf("It is Square Matrix ");
    }
    else {
        printf("It is not a Square matrix");
    }
}