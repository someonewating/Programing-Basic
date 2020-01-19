#include<stdio.h>
int main()
{
	char c=0;
	printf("\n");
	while (c != '\n')
	{
		putchar(c);
		c = getchar();
	}
}