#include<stdio.h>
int main()
{
	int f, lastf, prevf, i, n;
	prevf = 0;
	lastf = 1;
	printf("%9d %9d", prevf, lastf);
	n = 2;
	for (i = 3; i <= 20; i++)
	{
		f = prevf + lastf;
		if (n % 4 == 0)
			printf("\n");
		printf("%9d", f);
		prevf = lastf;
		lastf = f;
		n = n + 1;
	}
}