#include<stdio.h>
int main()
{
int a,b,c,d;
for(d=100;d<1000;d=d+1)
{
a=d%10;
b=d/100;
c=d%100/10;
if(d==a*a*a+b*b*b+c*c*c)
printf("The narcissus number is:%d\n",d);
}
return 0;
}