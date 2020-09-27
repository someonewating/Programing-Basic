#include<stdio.h>
int main()
{
	int m, n, t, r;
	scanf("%d%d", &m, &n);
	if (m <= n)
	{
		t = m;
		m = n;
		n = t;
	}
	do
	{
		r = m % n;
		if (r == 0)
			break;
		m = n;
		n = r;
	} while (r != 0);
	printf("%d", n);
	return 0;
}