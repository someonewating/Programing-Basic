#include<stdio.h>
int main()
{
	void concatenate(char string1[], char string2[], char string[]);
	char s1[100], s2[100], s[100];
	scanf("%s%s", &s1, &s2);
	concatenate(s1, s2, s);
	printf("%s\n", s);
	return 0;
}
void concatenate(char string1[], char string2[], char string[])
{
	int i, j;
	for (i = 0; string1[i] != '\0'; i++)
		string[i] = string1[i];
	for (j = 0; string2[i] != '\0'; j++)
		string[i + j] = string2[j];
	string[i + j] = '\0';
}