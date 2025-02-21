#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the number =");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
if(i%2==1){

sum=sum+i;
}

}
printf("%d",sum);
return 0;
}