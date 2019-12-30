#include<stdio.h>
int main()
{
	int a[10],i,k,t;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]); 
    for(i=0;i<9;i++) 
       for(k=0;k<9-i;k++)
       if(a[k]>a[k+1])
       {
		   t=a[k];
		   a[k]=a[k+1];
		   a[k+1]=t;
	   }
    printf("排序后:\n");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}