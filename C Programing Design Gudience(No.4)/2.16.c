#include<stdio.h>
#include<math.h>
int main()
{
	int n = 100, i;
	do
	{
		i = 2;
		do
		{
			if (n % i == 0)
				i = n;
			else
				i = i + 1;
		} while (i <= sqrt(n));
		if (i < n)
			printf("%d ", n);
		n++;
	} while (i <= 200);
	return 0;
}