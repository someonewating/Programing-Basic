#include<stdio.h>
int main()
{
	int n;
	printf("input n:");
	scanf("%d", &n);
	if (n % 3 == 0)
	{
		if (n % 5 == 0)
			printf("%d能被3,5整除",n);
	}
	else
		printf("%d不能被3,5整除",n);
	return 0;
}