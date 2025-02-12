#include<stdio.h>
int main()
{
    char n;
    printf("Enter the Character  =");
    scanf("%c",&n);

    switch(n)
    {
        case 'a' :
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("It is vowel");
        break;
        default:
        printf("It is constant ");
        break;
    }
    return 0;

}