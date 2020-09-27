#include<stdio.h>
int main()
{
	int n = 1, a, max;
	printf("input max:");
	scanf("%d", &max);
	if (n < 10)
	{
		printf("input a:");
		scanf("%d", &a);
		if (a > max)
		{
			max = a;
			n++;
		}
		else
			printf("%d", max);
	}
	else
		printf("%d", max);
	return 0;
}