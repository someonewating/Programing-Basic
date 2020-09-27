#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("input a b c:");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
		printf("%d %d %d ", c, a, b);
	else
	{
		if (c > b)
			printf("%d %d %d ", a, c, b);
		else
			printf("%d %d %d ", a, b, c);
	}
	return 0;
}