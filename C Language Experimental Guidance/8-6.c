#include<stdio.h>
#include<stdint.h>
void aa(char *p);
/*#define N 20;*/
int main()
{
	char a[15] = { "DATA STRUCTURE" },
		b[15] = { "COPUTER DESIGN" },
		c[15] = { "C PROGROM" };
	printf("%s%s%s\n", a, b, c);
	aa(a);
	aa(b);
	aa(c);
	return 0;
}
void aa(char *p)
{
	int i, j;
	char t;
	for (i = 0; i < 15; i++)
		for (j = 0; j < 15 - i; j++)
			if (p[j] < p[j+1])
			{
				t = p[j];
				p[j] =p[j + 1];
				p[j + 1] = t;
			}
	printf("%s", p);
}