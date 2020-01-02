#include<stdio.h>
int main()
{
float x,Y;
printf("Please input a number:");
scanf("%f",&x);
if(x<0) 
{
  Y=x;
  printf("Result:%.2f\n",Y);
}
else if(x<10&&x>=0) 
{
       Y=2*x+1;
	   printf("Result:%.2f\n",Y);
}
else if(x>=10) 
{
       Y=3*x-2;
	   printf("Result:%.2f\n",Y);
}
return 0;
}