#include<stdio.h>
void inc(int x, int y);
main()
{
	int a = 1, b = 2;
	inc(a, b);
	printf("a=%d,b=%d\n", a, b);
}
void inc(int x, int y)
{
	x++;
	++y;
	printf("\nx=%d,y=%d\n", x, y);
}