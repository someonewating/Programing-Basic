#include<stdio.h>
#include<conio.h>
int main()
{
	char c1, c2, c3;
	c1 = getche();
	c2 = getche();
	c3 = getche();
	putchar(c1 - 32);
	putchar(c2 - 32);
	putchar(c3 - 32);
	putchar('\n');
	return 0;
}