#include <stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d%c%d",&a,&c,&b);
	if(c==43)
	{
		i=a+b;
		printf("%d",i);
	}
	if(c==45)
	{
		i=a-b;
		printf("%d",i);
	}
	if(c==42)
	{
		i=a*b;
		printf("%d",i);
	}
	if(c==47)
	{
		i=a/b;
		printf("%d",i);
	}
	return 0;
}
