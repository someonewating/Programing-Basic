#include "stdio.h"
void main()
{
    char a[50],b[50],c[50];
    int i=0,j=0,k=0;
    printf("�����һ���ַ���");
    gets(a);
    printf("����ڶ����ַ���");
    gets(b);
    printf("a=%s\n",a);
    printf("a=%s\n",b);
    while (a[i]) c[k++]=a[i++];
    while (b[j]) c[k++]=b[j++];
    c[k]=b[j];
    printf("c=%s\n",c);
}