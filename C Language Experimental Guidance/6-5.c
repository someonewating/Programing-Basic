#include <stdio.h>
void ss(int x);                                        //定义素数判断函数
int main()
{
    int n;
    scanf("%d", &n);                                   //输入一个整数
    ss(n);                                             //调用素数判断函数
    return 0;
}
//素数判断函数
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
