#include<stdio.h>
int main()
{
	int x, n, sum = 0, i = 1, s;
	scanf("%d%d", &x, &n);
	s = x;
	for (i = 1; i <= n; i++)
	{
		sum = sum + s;
		i = i + 1;
		s = -s * x * x / ((2 * i - 1) * (2 * i - 2));
	}
	printf("%d %d %d", x, n, sum);
}