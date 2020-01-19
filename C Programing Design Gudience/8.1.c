#include<stdio.h>
void main()
{
	float a, b, c, q, m();
	printf("enter 2 number!\n");
	scanf("%f%f", &a, &b);
	printf("a=%fb=%f\n", a, b);
	c = m(a, b, &q);
	printf("c=%f\n", c);
	printf("q=%f\n", q);
}
float m(float x, float y, float* p)
{
	float s;
	s = sqrt(x * x + y * y);
	*p = atan2(y, x);
	return(s);
}