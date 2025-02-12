#include<stdio.h>
int main()
{
    int p,d,n;
    printf("Enter you price");
    scanf("%d",&p);

    if(p<1000)
    {
        printf("Discount only above Rs.1000");
    }
    else if((p>=1000)&&(p<2000))
    {
        printf("Your dicount is 7percent\n");
        d=p*0.07;
        n=p-d;
        printf("The Price after discount is %d",n);
    }
    else if ((p>=2000)&&(p<5000))
    {
        printf("Your dicount is 10percent\n");
        d=p*0.1;
        n=p-d;
        printf("The price after discount is=%d",n);
    }
    else if ((p>=5000)&&(p<10000))
    {
        printf("Ypur dicount is 12percent\n");
        d=p*0.12;
        n=p-d;
        printf("The price After discount is =%d",n);
    }
    else {
        printf("Your disclunt is 15percent\n");
        d=p*0.15;
        n=p-d;
        printf("The Price After discount is %d",n);
    }
    return 0;
}