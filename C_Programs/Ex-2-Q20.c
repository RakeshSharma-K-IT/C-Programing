#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the  X axis Value=");
    scanf("%d",&x);
    printf("Enter the Y axis Value =");
    scanf("%d",&y);

    if((x>0)&&(y>0))
    {
        printf("It lies on 1st quadrant  ");
    }
    else if((x<0)&&(y>0))
    {

        printf("It lies on 2nd Quadrant");
    }
    else if((x<0)&&(y<0))
    {
        printf("it lies on 3rd Quadrent");
    }
    else if((x>0)&&(y<0))
    {
        printf("It is lies on 4th Quadrant");
    }
    else 
    {
        printf("Enter valid Points");
    }
    return 0;

}