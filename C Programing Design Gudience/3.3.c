#include<stdio.h>
int main()
{
	float pi, h, r, l, s, sq, vq, vz;
	pi = 3.1415926535898747;
	printf("请输入半径r，圆柱高h:");
	scanf("%f,%f", &r, &h);
	l = 2 * pi * r;
	s = pi * r * r;
	sq = 4 * s;
	vq = 4.0 / 3.0 * pi * r * r * r;
	vz = s * h;
	printf("\n圆周长为:l=%.2f\n", l);
	printf("圆面积为:s=%.2f\n", s);
	printf("圆球表面积为:sq=%.2f\n", sq);
	printf("圆球体积为:vq=%.2f\n", vq);
	printf("圆柱体积为:vz=%.2f\n", vz);
}