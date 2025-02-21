#include<stdio.h>
#include<math.h>
int main()
{
    float i,n;
    printf("Enter the power=");
    scanf("%f",&n);
    float x,fact=1;
    printf("Enter the x value =");
    scanf("%f",&x);
    float  a=1;
    for(i=1;i<=n;i++){
        while(i<=n){
            fact=fact*i;
            a+=(pow(x,i)/fact);
            
            break;
        }
    }
    printf("%f",a);
    

}