#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Input three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&b>c)
	  printf("%d is max",a);
	if(b>a&&b>c)
	  printf("%d is max",b);
	if(c>a&&c>b)
	  printf("%d is max",c);
	return 0;
} 
