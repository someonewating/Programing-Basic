#include<stdio.h>
int main()
{
	int a, b, c;
	printf("input three numbr:");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
		if (b < c)
			printf("max=%d\n", c);
		else
			printf("max=%d\n", b);
	else if (a < c)
		printf("max=%d", c);
	else
		printf("max=%d", a);
	return 0;
}