#include "stdio.h"
void main()
{
    char a[50],b[50],c[50];
    int i=0,j=0,k=0;
    printf("输入第一个字符串");
    gets(a);
    printf("输入第二个字符串");
    gets(b);
    printf("a=%s\n",a);
    printf("a=%s\n",b);
    while (a[i]) c[k++]=a[i++];
    while (b[j]) c[k++]=b[j++];
    c[k]=b[j];
    printf("c=%s\n",c);
}