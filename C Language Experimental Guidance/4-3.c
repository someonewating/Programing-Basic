/*#include <stdio.h>
int main()
{
	int i;
	float a=2,b=1,c,t,sum=0;
	for(i=1;i<=20;i++)
	{
		t=a/b;
		c=a+b;
		b=a;
		a=c;
		sum=sum+t;
		printf("%.2f \n",sum);
	}
	printf("tootaly:%.2f",sum);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int i=1;
	float a=2,b=1,c,t,sum=0;
	while(i<=20)
	{
		t=a/b;
		c=a+b;
		b=a;
		a=c;
		sum=sum+t;
		i=i+1;
		printf("%.2f \n",sum);
	}
	printf("tootaly:%.2f",sum);
	return 0;
}
