#include<stdio.h>
int main()
{
    int n;
    char name[10];
    printf("Enter the Roll Number=");
    scanf("%d",&n);
    printf("Enter Your name:");
    scanf("%s", name);
    printf("Roll Number: %d \n",n);
    printf("Name : %s",name);
    return 0;
}