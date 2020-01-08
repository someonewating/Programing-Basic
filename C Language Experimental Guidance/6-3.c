#include<stdio.h>
void aa(int x);
int main()
{
	int i, j, a[10][5];
	printf("输入十个数");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2;j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i < 2; i++)
	{
		printf("\n");
		for (j = 0; j < 2; j++)
			printf("%d ", a[i][j]);
	}
	return 0;
}
void aa(int x)
{
}