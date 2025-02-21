#include<stdio.h>
#include<math.h>
int main()
{
int n,r,sum=0,t,i,c=0,d;
printf("Enter the number =");
scanf("%d",&n);
t=n;
d=n;
while(n>0)
{
c=c+1;
n=n/10;
}

for(i=0;t>0;i++)
{
r=t%10;
sum=sum+pow(r,c);
t=t/10;
}

if(d==sum)
{
printf("It is Amstrong Number");
}
else {
printf("It is not a Amstrong  number");
}
return 0;
}