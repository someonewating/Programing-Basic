#include<stdio.h>
main()
{
	char* s = "abcde", * t = "abcdd";
	int flag;
	flag = my_strcmp(s, t);
	printf("\n%d\n", flag);
}
int my_strcmp(char* s, char* t)
{
	while (*s == *t)
	{
		if (*s == '\0') return 0;
		s++;
		t++;
	}
	return (*s - *t);
}