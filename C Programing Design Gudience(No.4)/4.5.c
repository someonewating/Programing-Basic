#include<stdio.h>
#include<math.h>
#define M 100
int main()
{
	int i, k;
	printf("input a number which lass than %d", M);
	scanf("%d", &i);
	k = sqrt(i);
	printf("%d's integer part of square root is%d\n", i, k);
	return 0;
}