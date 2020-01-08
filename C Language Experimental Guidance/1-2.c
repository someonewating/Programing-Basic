#include <stdio.h> 
void main() 
{  
     int a,b,temp; 
	 a=3;
     b=4; 
	 temp=a;    /* 将 a 的值存储起来 */ 
     a=b;       /* 将 b 的值转到 a 中，实现 b 向 a 转换 */ 
     b=temp;   /* 将记录 a 原始值的变量 temp，赋值给 b，实现 a 向 b 转换 */  
     printf("a=%f,b=%d\n",a,b); 
}
