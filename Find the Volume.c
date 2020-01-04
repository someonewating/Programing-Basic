#include<stdio.h>
int main()
{
    float r,h,l,s,x,v,y;
    printf("输入圆的半径\n");
    scanf("%f",&r);
    printf("输入圆柱体的高\n");
    scanf("%f",&h);
    l=2*3.14*r;
    s=3.14*r*r;
    x=4*3.14*r*r;
    v=(4/3)*3.14*r*r*r;
    y=3.14*r*r*h;
    printf("圆的周长为%.2f\n",l);
    printf("圆的面积为%.2f\n",s);
    printf("球体的表面积为%.2f\n",x);
    printf("球体体积为%.2f\n",v);
    printf("圆柱体积为%.2f\n",y);
    return 0;
}
