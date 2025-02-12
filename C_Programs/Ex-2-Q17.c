#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number =");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Enter positive Number");
    }
    else if(n==0)
    {
        printf("is is Zero Enter Another number");
    }
    else if(n>0)
    {
        for(i=2;i<=100;i++)
        {
            if((n%i==0)&&(n!=i))
            {
                printf("It is composite number",i);
                break;
            }
            else if((n%i==0)&&(n==i))
            {
                printf("It is  Prime number");
                break;
            }
        }
        
    }
    
    else 
    {
            printf("It is a prime Number");
    }

}