#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int l=sizeof(a)/sizeof(a[0]);
    printf("The  length of the Array elements are %d",l);
    return 0;
}