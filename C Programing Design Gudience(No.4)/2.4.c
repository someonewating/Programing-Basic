#include<stdio.h>
int main()
{
	int n = 1, max, a=0;
	printf("输入max");
	scanf("%d", &max);
	if (n < 10)
	{
		do/*输入10个数*/
		{
			printf("输入a:");
			scanf("%d", &a);
			if (a > max)
			{
				a = max;
				n = n + 1;
			}
			else
				n = n + 1;
		} while (n < 10);
		printf("%d", max);
	}
	else
		printf("%d", max);
	return 0;
}