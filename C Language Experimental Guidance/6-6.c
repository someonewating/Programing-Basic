#include <stdio.h>
void ss(int s);
int main()
{
	int a;
	scanf("%d", &a);
	ss(a);
	return 0;
}
void ss(int s)
{
	if (s % 4 == 0 && s % 100 != 0)
		printf("%dÊÇÈòÄê", s);
}
