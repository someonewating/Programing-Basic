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
	printf("�ܳ�:l=%6.2f\n", l);
	printf("���:s=%6.2f\n", s);
	printf("�����sq=%6.2f\n", sq);
	printf("���v=%6.2f\n", vq);
	printf("���vz=%6.2f\n", vz);
	return 0;
}