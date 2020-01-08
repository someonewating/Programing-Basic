/*#include <stdio.h> 
void main() 
{
     int i,sum=0;
     for(i=1;i<=100;i++) sum=sum+i;ÀÛ¼ÓÇóºÍ 
     printf("sum=%d\n",sum); 
}*/
#include <stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum=sum+i;
		i++;
	}
    printf("sum=%d\n",sum);
    return 0;
}
