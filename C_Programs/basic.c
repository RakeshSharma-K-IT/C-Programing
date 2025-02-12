#include<stdio.h>
#include<conio.h>
void main() 
{
    int a;
    float b;
    char d;
    char s[90];
    //clrscr();
    printf("Enter the integer value is =");
    scanf("%d",&a);
    printf("Enter the float value =");
    scanf("%f",&b);
    printf("Enter the character=");
    scanf("%c",&d);
    printf("Enter the String =");
    scanf("%s",&s);
    printf("Your entered value of interger is %d \n",a);
    printf("Your entered Float value is %.2f  \n",b);
    printf("Your entered value of character is %c \n",d);
    printf("Your entered value of string is %s \n",s);
    getch();

}