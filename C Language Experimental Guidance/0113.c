#include<stdio.h>
int ss(int *p);
int main()
{
	int sum,*p;
	int a[3][4] = { 1,3,5,7,9,11,13,17,19,21,23,25 };
	p = &a[0][0];
	sum=ss(p);
	printf("%d", sum);
	return 0;
}
int ss(int *p)
{
	int i, j, m=0;
	for (i = 0; i < 12; i++)
		m = m + *(p+i);
	return m;
}