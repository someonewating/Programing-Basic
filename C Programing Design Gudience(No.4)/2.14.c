#include<stdio.h>
int main()
{
	int sum = 0, n = 1;
	do
	{
		sum = sum + n;
		n = n + 1;
	} while (n <= 100);
	printf("%d", sum);
	return 0;
}