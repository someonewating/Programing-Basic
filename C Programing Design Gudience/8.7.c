#include<stdio.h>
void classify(int* pa)
{
	int i, s9 = 0, s8 = 0, s7 = 0, s6 = 0, s0 = 0, k;
	for (i = 1; i <= n; i++)
	{
		k = *(pa + i);
		if (k > 100)
		else if (k >= 90) s9++;
		else if (k >= 80) s8++;
		else if (k >= 60) s6++;
		else if (k >= 0) s0++;
	}
	printf("\n90~100%d\n", s9);
	printf("80~89%d\n", s8);
	printf("60~79%d\n", s6);
	printf("0~60%d\n", s0);
}