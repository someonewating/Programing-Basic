#include<stdio.h>
#define N 10
int main()
{
	int i, j, t, a[N] = { 1,3,6,4,7,9,8,5,2,0 },*p=&a[0];
	for(i=0;i<N;i++)
		for (j = 1; j < N - i+1; j++)
			if (p < p+j)
			{
				t=a[j];
				a[j] = a[j + 1];
				a[j + 1]=t;
            }
	printf("ÅÅĞòºó:");
	for (i = 9; i >= 0; i--)
		printf("%d ", a[i]);
	return 0;
}