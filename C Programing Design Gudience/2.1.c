#include<stdio.h>
int main()
{
	char a = '\n';
	int b = 12345;
	unsigned int c = 54321;
	float d = 1.23e+18;
	double e = 3.21 + 81;
	long int f = 123L;
	printf("%a=%c,b=%d,c=%u,d=%e,e=%le,f=%ld\n", a, b, c, d, e, f);
}