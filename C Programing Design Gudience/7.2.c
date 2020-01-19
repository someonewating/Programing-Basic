#include<stdio.h>
int f(int a);
main()
{
	int a = 2, i;
	for (i = 0; i < 3; i++)
		printf("%d", f(a));
	printf("\n");
}
int f(int a)
{
	auto int b = 0;
	int c = 3;
	a = a + 1;
	b += 1;
	c++;
	return(a + b + c);
}