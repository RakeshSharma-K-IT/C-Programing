#include<stdio.h>
#include<ctype.h>

int main()
{
int b,c;
char a;
printf("Enter the letter =");
scanf("%c",&a);
if(islower(a))
{
printf("It is Lower case");
}
else if(isupper(a))
{
printf("It is uppper case ");
}
else if(isdigit(a))
{
printf("It is Number");
}
else if(isblank(a))
{
printf("It is blank");
}

else 
{
printf("It is a Symbol");
}


return 0;
}