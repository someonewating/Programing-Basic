#include<stdio.h>
struct st
{
	int n;
	struct st* next;
};
struct st a[3] = { {1,&a[0]},{2,a + 1},{3,&a[2]} };
main()
{
	struct st* p = a;
	printf("%d\t", p++->n);
	printf("%d\t", ++p->n);
	printf("%d\t", (++p)->n);
	printf("%d\t", *(p++)->next);
}