#include <stdio.h> 
void main() 
{  
     int a,b,temp; 
	 a=3;
     b=4; 
	 temp=a;    /* �� a ��ֵ�洢���� */ 
     a=b;       /* �� b ��ֵת�� a �У�ʵ�� b �� a ת�� */ 
     b=temp;   /* ����¼ a ԭʼֵ�ı��� temp����ֵ�� b��ʵ�� a �� b ת�� */  
     printf("a=%f,b=%d\n",a,b); 
}
