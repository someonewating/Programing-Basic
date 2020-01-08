#include <stdio.h>
int main()
{
	int i,a,b,c;
	scanf("%d",&i);
	if(i>99)
	{
        a=i%10;
        b=i/100;
        c=i%100/10;
        if(i==a*a*a+b*b*b+c*c*c)
        printf("Y");
        if(i!=a*a*a+b*b*b+c*c*c)
    	printf("N");
    }
    else
    printf("date error");
    return 0;
}
