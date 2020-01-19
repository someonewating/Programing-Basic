#include<stdio.h>
#define N 10
int main()
{
	int i, j, t, a[N];
	printf("input 10 integer number:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (j = 0; j < N - 2; j++)
		for (i = 0; i < N - j - 2;i++)
			if (a[i] - a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
	printf("out new seq:");
	for (i = 0; i < N; i++)
		printf("%d", a[i]);
}