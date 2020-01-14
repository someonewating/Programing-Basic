#include<stdio.h>
void ss(int *p);
int main()
{
	int a[10] = { 1,8,10,2,-5,0,7,15,4,-5 };
	ss(a);
	printf("max:%d\nmin:%d", a[0], a[9]);
	return 0;
}
void ss(int *p)
{
	int i, t, j;
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10 - i; j++)
			if (*(p+j) < *(p+j+1))
			{
				t = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
}