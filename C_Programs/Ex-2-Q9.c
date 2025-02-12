#include<stdio.h>
int main()
{
    int y;
    printf("Enter the Year=");
    scanf("%d",&y);
    if((y%4==0)&&(y%100!=0))
    {
        printf("It is Leap year");
    }
    else if(y%400==0){
        printf("It is a leap year");
    }
    else {

        printf("it is not a leap year");
    }

}