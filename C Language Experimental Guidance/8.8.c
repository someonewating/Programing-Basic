#include<stdio.h>
int ss(int *p);
int main()
{
	int sum;
	int a[3][4] = { 1,3,5,7,9,11,13,17,19,21,23,25 };
	int (*p)[4];
	p = a;
	sum=ss(p);
	return 0;
}
int ss(int *p)
{
	int i, j, m=0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			m = m + *(*(p + i) + j);
	return m;
}