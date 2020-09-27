#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, d, x1, x2, p, q;
	scanf("%f%f%f", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d >= 0)
	{
		if (d == 0)
		{
			x1 = -b / (2 * a);
			x2 = x1;
		}
		else
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
		}
		printf("%f %f", x1, x2);
	}
	else
	{
		p = -(b / (2 * a));
		q = sqrt(-d) / (2 * a);
		printf("x1=%f+%f*i\t", p, q);
		printf("x2=%f-%f*i", p, q);
	}
	return 0;
}