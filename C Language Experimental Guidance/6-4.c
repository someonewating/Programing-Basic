#include<stdio.h>
void alpha(int m, int n);
void bravo(int m, int n);
int main()
{
    int a, b;
    printf("������������\n");
    scanf("%d%d", &a, &b);
    alpha(a, b);
    bravo(a, b);
    return 0;
}
void alpha(int m, int n)
{
    int t, i;
    if (m < n)
    {
        t = m;
        m = n;
        n = t;
    }
    for (i = n; i > 0; i--)
        if (m % i == 0 && n % i == 0)
        {
            printf("���Լ��Ϊ%d\n",i);
            break;
        }
}
void bravo(int m, int n)
{
    int temp, i;
    if (m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for (i = m; i > 0; i++)
        if (i % m == 0 && i % n == 0)
        {
            printf("��С������Ϊ%d\n",i);
            break;
        }
}
