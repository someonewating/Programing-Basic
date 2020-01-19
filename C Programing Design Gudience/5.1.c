#include<stdio.h>
int main()
{
	int i, j, k, total, sum;
	for(i=0;i<=20;i++)
		for(j=0;j<=33;j++)
			for (k = 1; k <= 100; k++)
			{
				if (i + j + k != 100)
					continue;
				if ((5 * i + 3 * j + k / 3 != 100) || (k % 3 != 0))
					continue;
				printf("i=%d,j=%d,k=%d\n", i, j, k);
			}
}