#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter Anythig to find it is a alphabet or number or special char");
    scanf("%c",&a);
    if(isalpha(a))
    {
        printf("It is alphabet");
    }
    else if(isdigit(a))
    {
        printf("It is Digit");
    }
    else if(isblank(a))
    {
        printf("It is Blank");
    }
    else
    {
        printf("It is a Symbol");
    }
    return 0;
}