#include<stdio.h>
int main()
{ 
    double i,a=100,b=0,n,sum=100;
    printf("请输入落地次数n：\n");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+2*b;
        a=a/2;
        b=a;
    }
    printf("小球从100m高处落地%.lf次时，共经过%.lf米。第%.lf次落地后反弹的高度为%.lf米。\n",n,sum,n,a);
}
