#include<stdio.h>
int main()
{
    float r,h,l,s,x,v,y;
    printf("����Բ�İ뾶\n");
    scanf("%f",&r);
    printf("����Բ����ĸ�\n");
    scanf("%f",&h);
    l=2*3.14*r;
    s=3.14*r*r;
    x=4*3.14*r*r;
    v=(4/3)*3.14*r*r*r;
    y=3.14*r*r*h;
    printf("Բ���ܳ�Ϊ%.2f\n",l);
    printf("Բ�����Ϊ%.2f\n",s);
    printf("����ı����Ϊ%.2f\n",x);
    printf("�������Ϊ%.2f\n",v);
    printf("Բ�����Ϊ%.2f\n",y);
    return 0;
}
