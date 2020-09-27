#include<stdio.h>
struct x
{
	int a;
	char* b;
}*p;
char x0[] = "li", x1[] = "zhang";
struct x xv[] = { {1,x0},{4,x1} };
main()
{
	p = xv;
	printf("%c", ++ * p->b);
}