#include<stdio.h>
int main()
{
	int p, r, n, m, temp;
	printf("input two number");
	scanf("%d%d", &n, &m);
	if (n < m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	p = n * m;
	while (m != 0)
	{
		r = n % m;
		n = m;
		m = r;
	}
	printf("%d\n", n);
	printf("%d\n", p / n);
	return 0;
}