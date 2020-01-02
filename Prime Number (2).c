#include<stdio.h>
int sushu(int m)
{
int i;
for(i=2;i<=m;i++)
   if(m%i==0)
	   return 0;
return 1;
}
int main()
{
int n,t;
printf("input");
scanf("%d",&n);
t=sushu(n);
if(t==1)
printf("yes");
else
printf("no");
return 0;
}