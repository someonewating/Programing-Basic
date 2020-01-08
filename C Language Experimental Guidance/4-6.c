#include <stdio.h>
#include <windows.h>
int main()
{
    char c1[10] = { 0 };
    char c2[10] = { 0 };
    gets(c1);//输入第一个字符串
    gets(c2);//输入第二个字符串
    int sz1 = strlen(c1);
    int sz2 = strlen(c2);
    int tmp = (sz1 > sz2) ? sz1 : sz2;//取字符串长度大的值
    int i = 0;
    int sum = 0;
    for (i = 0; i < tmp; i++)//将两字符串中每个字符相减
        sum += c1[i] - c2[i];
    printf("%d\n",sum);
    return 0;
}
