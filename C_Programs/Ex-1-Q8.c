#include<stdio.h>
int main()
{
    int r;
    char name;
    printf("Enter your roll number=");
    scanf("%d",&r);
    printf("Enter your Name =");
    scanf(" %c",&name);
    printf("Roll Number :%d \n",r);
    printf("Name first Letter :%c",name);
    return 0;
}