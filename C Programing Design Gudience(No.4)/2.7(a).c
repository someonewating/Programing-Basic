#include<stdio.h>
int main()
{
	int n;
	printf("input n:");
	scanf("%d", &n);
	if (n % 3 == 0)
	{
		if (n % 5 == 0)
			printf("%d�ܱ�3,5����",n);
	}
	else
		printf("%d���ܱ�3,5����",n);
	return 0;
}