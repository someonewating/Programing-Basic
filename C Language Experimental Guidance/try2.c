#define N 5
#include <stdio.h>
struct student
{
    char num[6];
    char name[8];
    int score[4];/*ע�⣬���ǵ��±�� 1 ��ʼ�������ſγ̳ɼ� score[3]�����趨 ���������鳤�ȼ� 1, score[4]����ֹ�������*/
}stu[N];
void main( )
{
    int i,j ;
    for(i=0;i<N;i++)
    {
        printf("\nInput score of student %d:\n",i+1);
        printf("NO.:");
        scanf("%s", stu[i].num);
        printf("name:");
        scanf("%s", stu[i].name);
        for(j=1;j<=3;j++)
        {
            printf("score %d:",j);
            scanf("%d",&stu[i].score[j]);
        }
        printf("\n");
    }
    for (i = 0; i < N; i++)
    {
        printf("%5s%10s", stu[i].num, stu[i].name);
        for (j = 1; j <= 3; j++)
            printf("%9d", stu[i].score[j]);
        printf("\n");
    }
} 