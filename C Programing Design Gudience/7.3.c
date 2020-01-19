#include<stdio.h>
float fac(int n)
{
	float f;
	if (n < 0)
		printf("n<0,date error");
	else if ((n == 0) || (n == 1))
		f = 1;
	else f = n * fac(n - 1);
	return(f);
}
main()
{
	int n;
	float y;
	printf("input a integer number:");
	scanf("%d", &n);
	y = fac(n);
	printf("%d!=%10.0f\n", n, y);
}