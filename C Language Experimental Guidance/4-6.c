#include <stdio.h>
#include <windows.h>
int main()
{
    char c1[10] = { 0 };
    char c2[10] = { 0 };
    gets(c1);//�����һ���ַ���
    gets(c2);//����ڶ����ַ���
    int sz1 = strlen(c1);
    int sz2 = strlen(c2);
    int tmp = (sz1 > sz2) ? sz1 : sz2;//ȡ�ַ������ȴ��ֵ
    int i = 0;
    int sum = 0;
    for (i = 0; i < tmp; i++)//�����ַ�����ÿ���ַ����
        sum += c1[i] - c2[i];
    printf("%d\n",sum);
    return 0;
}
