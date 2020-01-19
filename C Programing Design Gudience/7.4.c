#include<stdio.h>
void decrement(void)
{
	int n=100;
	n -= 20;
}
void main(void)
{
	int n = 100;
	printf("n=%d\n", n);
	for (; n >= 60;)
	{
		decrement();
		printf("n=%d\n", n);
	}
}