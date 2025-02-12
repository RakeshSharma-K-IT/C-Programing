#include<stdio.h>
#include<conio.h>
void main()
{
    float r;
    printf("Enter the value of radius=");
    scanf("%f",&r);
    printf("The Circumference of circle is = %.2f",2*3.14*r);
    printf("The area of circle is %.2f",3.14*r*r);
    getch();
}