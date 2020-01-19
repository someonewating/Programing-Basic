#include<stdio.h>
void sort_with_num(int x[],int y[])
{
	int k, t, i, j;
	for (i = 1; i < n; i++)
	{
		k = i;
		for (j = i + 1; j < n + 1; j++)
			if (x[j] > x[k])
				k = j;
		if (k != i)
		{
			t = x[k];
			x[k] = x[i];
			x[i] = t;
			t = y[k];
			y[k] = y[i];
			y[i] = t;
		}
	}
}
/********************/
void sort(int a[])
{
	int b[201], m[201], i, j, k, t;
	for (i = 1; i <= n; i++)
	{
		b[i] = a[i];
		m[i] = i;
	}
	sort_with_num(b, m);
	printf("\nsort conclusion by the score:\n");
	printf("number score\n");
	for (i = 1; i <= n; i++)
		printf("%d %d \n", m[i], b[i]);
}