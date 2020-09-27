#include<stdio.h>
#include<string.h>
#define M 81
int fun(char* ss)
{
	int n = 0;
	while (ss[n])
		n++;
	return n;
}
NONO()
{
	FILE* rf, * wf;
	int len;
	char a[M], ch;
	rf = fopen("bc01.in", "r");
	wf = fopen("bc01.out", "w");
	fgets(a, M - 1, rf);
	len = strlen(a) - 1;
	ch = a[len];
	if (ch == '\n' || ch == 0x1a)
		a[len] = 0;
	len = fun(a);
	fprintf(wf, "%d", len);
	fclose(rf);
	fclose(wf);
}
main()
{
	char a[M];
	system("cls");
	printf("\nplease enter a string:");
	gets(a);
	printf("\nthe lenfth of the string is:%d\n", fun(a));
	NONO();
}