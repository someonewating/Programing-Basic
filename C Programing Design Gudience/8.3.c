#include<stdio.h>
void inv(int x[], int n)
{
	int t, i, j, m = n / 2;
	for (i = 0; i < m; i++)
	{
		j = n - 1 - i;
		t = x[i];
		x[i] = x[j];
		x[j] = t;
	}
}
int main()
{
	static int i, a[10] = { 3,7,9,1,0,6,7,5,4,2 };
	printf("\nthe original array:\n");
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);
	printf("\n");
	inv(a, 10);
	printf("the inverted array:\n");
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);
	printf("\n");
}