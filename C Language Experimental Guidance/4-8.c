#include <stdio.h>
int main()
{
	int a;
	for(a=1000;a<=2000;a++)
	{
		if(a%4==0&&a%100!=0)
		printf("%d ",a);
	}
	return 0;
}
