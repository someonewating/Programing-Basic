#include <stdio.h> 
void main()   
{
    int a,b,s;                   /* 定义变量 */
    printf(" Enter two number a,b=?\n");
	scanf("%d%d", &a,&b);     /*调用标准函数，要求用户输入 2 个数据 */     
	s=a+b;     
	printf("s=%d\n",s); 
}
