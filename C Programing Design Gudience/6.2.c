#define N 5
#include<stdio.h>
int main()
{
	int a[N + 1], p, i, x, m;
	printf("input %d sequential data:", N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	printf("\ninput an integer to insert:");
	scanf("%d", &x);
	p = 0;
	while (x >= a[p] && p < N)
		p++;
	for (i = N - 1; i >= p; i--)
		a[i + 1] = a[i];
	a[p] = x;
	m = N + 1;
	printf("\ninteger %d has been inserted into arrary:,x");
	for (i = 0; i < m; i++)
		printf("%d", a[i]);
	return 0;
}