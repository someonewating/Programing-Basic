#include<stdio.h>
int main()
{
	float h, r, s, l, sq, vq, vz;
	float pi = 3.1415926535898747;
	printf("please input the radium(r) of circle and its high(h)");
	scanf("%f,%f", &r, &h);
	l = 2 * pi * r;
	s = r * r * pi;
	sq = 4 * pi * r * r;
	vq = 3.0 / 4.0 * pi * r * r * r;
	vz = pi * r * r * h;
	printf("周长:l=%6.2f\n", l);
	printf("面积:s=%6.2f\n", s);
	printf("表面积sq=%6.2f\n", sq);
	printf("体积v=%6.2f\n", vq);
	printf("体积vz=%6.2f\n", vz);
	return 0;
}