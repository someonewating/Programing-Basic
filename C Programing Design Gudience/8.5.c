#include<stdio.h>
int main(void)
{
	int n;
	char* month_name[] = { "illegal month","january","february","marth","april","may","june","july","augest","septmber","october","november","december" };
	printf("input number of month:\n");
	scanf("%d", &n);
	if (n >= 1 && n <= 12)
		printf("%s\n", month_name[n]);
	else
		printf("%s\n", month_name[0]);
	return 0;
}