#include <stdio.h>
void ss(int x);                                        //���������жϺ���
int main()
{
    int n;
    scanf("%d", &n);                                   //����һ������
    ss(n);                                             //���������жϺ���
    return 0;
}
//�����жϺ���
void ss(int x)
{
    int i;
    for (i = 2; i <= x; i++)
        if (x % i == 0 && i != x)
        {
            printf("%d is not prime number!\n", x);
            break;
        }
    if (x == i - 1)
        printf("%d is prime number!\n", x);
}
