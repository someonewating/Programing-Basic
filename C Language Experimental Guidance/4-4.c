#include<stdio.h>
int main()
{ 
    double i,a=100,b=0,n,sum=100;
    printf("��������ش���n��\n");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+2*b;
        a=a/2;
        b=a;
    }
    printf("С���100m�ߴ����%.lf��ʱ��������%.lf�ס���%.lf����غ󷴵��ĸ߶�Ϊ%.lf�ס�\n",n,sum,n,a);
}
