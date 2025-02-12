#include<stdio.h>
#include<math.h>
int main()
{
    float w,h,b;
    printf("Enter you weight =");
    scanf("%f",&w);
    printf("Enter your Height in meter =");
    scanf("%f",&h);
    b=w/(h*h);
    printf("BMI is %.1f\n",b);
    if(b<18.5)
    {
        printf("Underwweight");
    }
    else if((b>=18.5)&&(b<=24.9))
    {
        printf("Normal Weight");
    }
    else if((b>=25)&&(b<=29.9))
    {
        printf("Over Weight");
    }
    else 
    {
        printf("Obesity");
    }
    return 0;
}