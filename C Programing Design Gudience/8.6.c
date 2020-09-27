void average(int* p)
{
	int i;
	float s = 0;
	for (i = 1; i <= n; i++)
		s = s + *(p + 1);
	printf("\nacerage score=%4.1f\n", s);
}