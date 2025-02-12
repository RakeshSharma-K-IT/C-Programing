#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter the Character=");
    scanf("%c",&a);
    if(isupper(a))
    {
        printf("It is Uppercase");
    }
    else if(islower(a))
    {
        printf("It is Lowercase");
    }
    else if (isdigit(a))
    {
        printf("It is Number");
    }
    else 
    {
        printf("Enter the  Valid Elements ");
    }
}