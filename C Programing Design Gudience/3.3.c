#include<stdio.h>
int main()
{
	float pi, h, r, l, s, sq, vq, vz;
	pi = 3.1415926535898747;
	printf("������뾶r��Բ����h:");
	scanf("%f,%f", &r, &h);
	l = 2 * pi * r;
	s = pi * r * r;
	sq = 4 * s;
	vq = 4.0 / 3.0 * pi * r * r * r;
	vz = s * h;
	printf("\nԲ�ܳ�Ϊ:l=%.2f\n", l);
	printf("Բ���Ϊ:s=%.2f\n", s);
	printf("Բ������Ϊ:sq=%.2f\n", sq);
	printf("Բ�����Ϊ:vq=%.2f\n", vq);
	printf("Բ�����Ϊ:vz=%.2f\n", vz);
}