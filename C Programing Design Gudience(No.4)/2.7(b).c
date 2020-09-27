#include<stdio.h>
int main()
{
	int n, flag = 0;
	scanf("%d", &n);
	if (n % 3 != 0)
		flag = -1;
	if (n % 5 != 0)
		flag = -1;
	if (flag == 0)
		printf("yes");
	else
		printf("no");
	return 0;
}