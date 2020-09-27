#include<stdio.h>
#define N 100
void main()
{
	FILE* fp;
	char str[N];
	int i = 0;
	if ((fp = fopen("L10_1.txt", "w")) == NULL)
	{
		printf("can not open the file.\n");
		exit(0);
	}
	printf("input a string:");
	scanf("%s", str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		fputc(str[i], fp);
		i++;
	}
	fclose(fp);
	fp = fopen("L10_1.txt", "r");
	fgets(str, 3, fp);
	printf("%s", str);
	fclose(fp);
}