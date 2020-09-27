#include<stdio.h>
int main()
{
	char c1, c2;
	printf("input two char:");
	c1 = getchar();
	c2 = getchar();
	printf("whf?");
	putchar(c1);
	putchar(c2);
	printf("\n");
	printf("%c%c\n", c1, c2);
	return 0;
}